#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Course {
    long int id;
    char name[129];
    char lecturer[65];
    char start_date[11];
    int students_count;
}Course;

typedef struct Student {
    char names[65];
    long int f_num;
    int attended_courses;
    long int course_id[11];
}Student;

int courses_by_lecturer(Course* course, int num, char lecturer[65], char start_date[11], char end_date[11]) {
    FILE *textFile= fopen("course_info.txt", "w");
    if (textFile == NULL) {
        printf("Error opening course_info.txt");
        return -1;
    }
    int startMonth, startDay, startYear;
    int endMonth, endDay, endYear;

    sscanf(start_date, "%d.%d.%d", &startDay, &startMonth, &startYear);
    sscanf(end_date, "%d.%d.%d", &endDay, &endMonth, &endYear);

    int start = startYear * 10000 + startMonth * 100 + startDay;
    int end = endYear * 10000 + endMonth * 100 + endDay;

    int count = 0;
    for (int i = 0; i < num; i++) {
        int courseMonth, courseDay, courseYear;
        sscanf(course[i].start_date, "%d.%d.%d", &courseMonth, &courseDay,&courseYear);
        int courseDate = courseYear * 10000 + courseMonth * 100 + courseDay;
        if (strcmp(course[i].lecturer, lecturer) == 0 && courseDate >= start && courseDate <= end) {
            fprintf(textFile, "<%ld>:<%s>:<%s>-<%d>\n",
                course[i].id, course[i].name, course[i].start_date, course[i].students_count);
            count++;
        }
    }
    fclose(textFile);
    return count;
}

int add_student(Course *courses, int c_num, long int target_id,
    struct Student *students, int s_num, long int target_f_num) {
    FILE *binaryFile = fopen("course_student.bin", "ab");
    if (binaryFile == NULL) {
        printf("Error opening course_student.bin");
        return -1;
    }
    int s_idx = -1, c_idx = -1,found = 0;

    for (int i = 0; i < c_num; i++) {
        if (courses[i].id == target_id) {
            c_idx = i;
            break;
        }
    }

    for (int i = 0; i < s_num; i++) {
        if (students[i].f_num == target_f_num) {
            s_idx = i;
            break;
        }
    }

    if (s_idx == -1 || c_idx == -1) return 0;

    for (int i = 0; i < students[s_idx].attended_courses; i++) {
        if (students[s_idx].course_id[i] == target_id) return 0;
    }
    if (courses[c_idx].students_count >= 30) return 0;
    if (students[s_idx].attended_courses >= 10) return 0;

    courses[c_idx].students_count++;
    students[s_idx].attended_courses++;
    students[s_idx].course_id[students[s_idx].attended_courses] = target_id;

    fwrite(&target_id, sizeof(long int), 1,binaryFile);
    fwrite(&target_f_num, sizeof(long int), 1, binaryFile);
    fclose(binaryFile);

    return 1;
}

void delete_course(Course **courses, int *n, char date[11]) {
    int day,month,year;
    sscanf(date, "%d.%d.%d", &day, &month, &year);
    int givenDate = year * 10000 + month * 100 + day;

    int found = 0;
    for (int i = 0; i < *n;) {
        int courseDay, courseMonth, courseYear;
        sscanf((*courses)[i].start_date, "%d.%d.%d", &courseDay, &courseMonth, &courseYear);
        int courseDate = courseYear * 10000 + courseMonth *100 + courseDay;
        if (courseDate < givenDate) {
            int j;
            for (j = i; j < (*n)-1; j++) {
                (*courses)[j] = (*courses)[j+1];
            }
            (*n)--;
            found ++;
            *courses = realloc(*courses, (*n)*sizeof(Course));
        }
        else {
            i++;
        }
    }
    if (found == 0) {
        printf("Course not found.\n");
    }
}
int main() {
    int num_courses, num_students;

    printf("Enter number of courses: "); scanf("%d", &num_courses);
    if (num_courses <= 0) {
        printf("Invalid number of courses.\n");
        return 1;
    }

    printf("Enter number of students: "); scanf("%d", &num_students);
    if (num_students <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    Course* courses = (Course*)malloc(sizeof(Course) * num_courses);
    if (courses == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    for (int i = 0; i < num_courses; i++) {
        printf("Enter course ID: "); scanf("%d", &courses[i].id);
        getchar();

        printf("Enter course name: "); fgets(courses[i].name, 129, stdin);
        courses[i].name[strlen(courses[i].name) - 1] = '\0';

        printf("Enter lecturer: "); fgets(courses[i].lecturer, 65, stdin);
        courses[i].lecturer[strlen(courses[i].lecturer) - 1] = '\0';

        printf("Enter start date: "); scanf("%10s", courses[i].start_date);
        courses[i].start_date[strlen(courses[i].start_date) - 1] = '\0';

        courses[i].students_count = 0;
    }

    Student *students = (Student*)malloc(sizeof(Student) * num_students);
    if (students == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("Enter student name: "); fgets(students[i].names, 65, stdin);
        students[i].names[strlen(students[i].names) - 1] = '\0';

        printf("Enter student f_num: "); scanf("%ld", &students[i].f_num);
        getchar();

        students[i].attended_courses = 0;

        }
    for (int j = 0; j < 10; j++) {
        students->course_id[j] = 0;
    }
    free(courses);
    free(students);
    return 0;
}
