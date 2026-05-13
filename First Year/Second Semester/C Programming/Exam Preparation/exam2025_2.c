#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Course {
    long int id_num;
    char name_course[128];
    char start_date[11];
    double price;
    int current_students;
    int type;
};

struct Student {
    char names[80];
    long int f_num;
    int attended_courses;
    long int courses_id[80];
};

int is_after(char *d1, char *d2) {
    int i;
    for (i = 6; i<= 9; i++) {
        if (d1[i] > d2[i]) return 1;
        if (d1[i] < d2[i]) return 0;
    }

    for (i = 3; i<= 4; i++) {
        if (d1[i] > d2[i]) return 1;
        if (d1[i] < d2[i]) return 0;
    }

    for (i = 0; i<= 1; i++) {
        if (d1[i] > d2[i]) return 1;
        if (d1[i] < d2[i]) return 0;
    }
    return 0;
}

void delete_course(struct Course *arr, int *n, int target_type, char *date) {
    int i, j, found = 0;
    for (i = 0; i < *n;) {
        if (arr[i].type == target_type && arr[i].current_students < 8 && is_after(arr[i].start_date, date)) {
            for (j = i; j < (*n) - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            found = 1;
        }
        else {
            i++;
        }
    }
    if (found == 0) {
        printf("Course not found.\n");
    }
}

int add_student(struct Course *courses, int c_count, long int target_id,
    struct Student *students, int s_count, long int target_f_num) {
    int s_idx = -1, c_idx = -1, i;

    for (i = 0; i < s_count; i++) {
        if (students[i].f_num == target_f_num) {
            s_idx = i;
            break;
        }
    }

    for (i = 0; i < c_count; i++) {
        if (courses[i].id_num == target_id) {
            c_idx = i;
            break;
        }
    }
    if (s_idx == -1 || c_idx == -1) return 0;

    if (students[s_idx].attended_courses >= 7 || courses[c_idx].current_students >= 50) {
        return 0;
    }
    for (i = 0; i < students[s_idx].attended_courses; i++) {
        if (students[s_idx].courses_id[i] == target_id) {
            return 0;
        }
    }

    FILE *f = fopen("students_info.txt", "a");
    if (f == NULL) {
        return -1;
    }
    int written = fprintf(f, "<%ld>;<%ld>;<%s>;<%.2f>\n",courses[c_idx].id_num, students[s_idx].f_num, courses[c_idx].start_date, courses[c_idx].price);
    fclose(f);

    if (written < 0) return -1;
    int pos = students[s_idx].attended_courses;
    students[s_idx].courses_id[pos] = target_id;
    students[s_idx].attended_courses++;
    courses[c_idx].current_students++;
    return 1;
}

char* check(struct Course *ar, int num) {
    double total_price = 0;
    for (int i = 0; i < num; i++) {
        total_price += ar[i].price;
    }

    double average = total_price / num;
    char *result = (char*) malloc(1024 * sizeof(char));
    if (result == NULL) return NULL;

    int k=0;
    int found = 0;
    for (int i = 0; i < num; i++) {
        if (ar[i].price < average && ar[i].current_students < 50) {
            found = 1;
            for (int j = 0; ar[i].name_course[j] != '\0'; j++) {
                result[k] = ar[i].name_course[j];
                k++;
            }
            result[k] = '\n';
            k++;
        }
    }
    if (found == 0) {
        free(result);
        return NULL;
    }
    result[k] = '\0';
    return result;
}

int main() {
    int count = 0;
    struct Course temp;
    FILE *f = fopen("courses.bin", "rb");
    if (f == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    while (fread(&temp, sizeof(struct Course), 1, f) == 1) {
        count++;
    }

    fseek(f, 0, SEEK_SET);

    struct Course *courses = (struct Course *) malloc(sizeof(struct Course) * count);
    if (courses == NULL) {
        printf("Error allocating memory\n");
        fclose(f);
        exit(1);
    }

    fread(courses, sizeof(struct Course), count, f);
    fclose(f);


    int count1 = 0;
    struct Student temp1;
    FILE *f1 = fopen("students.bin", "rb");
    if (f1 == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fread(&temp1, sizeof(struct Student), 1, f1) == 1) {
        count1++;
    }

    fseek(f1, 0, SEEK_SET);

    struct Student *students = (struct Student *) malloc(count1 * sizeof(struct Student));
    if (students == NULL) {
        printf("Error allocating memory\n");
        fclose(f1);
        return 1;
    }

    fread(students, sizeof(struct Student), count1, f1);
    fclose(f1);
    free(students);
    free(courses);
    return 0;
}
