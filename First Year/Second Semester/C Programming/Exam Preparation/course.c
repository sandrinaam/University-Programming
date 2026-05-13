#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    long int fNum;
    char names[51];
    char degree[31];
    char birthDate[11];
    int year;
    char sex;
    double grade;
}Student;

Student *searchStudent(Student * students, int n, char degree[], char sex, char year[5]) {
    int current_Year;
    sscanf(year, "%d", &current_Year);
    int givenYear = current_Year * 10000;
    Student *result = (Student*) malloc(sizeof(Student) * 1024);
    if (result == NULL) {
        printf("Error allocating memory");
        exit(1);
    }
    int k = 0, found = 0;;
    for (int i = 0; i < n; i++) {
        int day,month,birthYear;
        sscanf(students[i].birthDate, "%d.%d.%d", &day, &month, &birthYear);
        int birth_Year = birthYear * 10000;

        if (strcmp(degree, students[i].degree) == 0 && birth_Year > givenYear) {
            result[k] = students[i];
            k++;
            found++;
            }
        }
    if (found == 0) return NULL;
    return result;
}

void *info(Student * students, int n, int year, char letter) {
    FILE *binaryFile = fopen("students_info.bin", "wb");
    if (binaryFile == NULL) {
        printf("Error allocating memory");
        exit(1);
    }
    double totalGrade = 0;
    int countStudents = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].year == year) {
            totalGrade += students[i].grade;
            countStudents++;
        }
    }
    double averageGrade = totalGrade / countStudents;

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].year == year && students[i].grade < averageGrade && students[i].names[0] == letter) {
            fwrite(binaryFile, sizeof(Student), 1, binaryFile);
            found++;
        }
    }
    if (found == 0) printf("No student found");
    fclose(binaryFile);
}

Student *newElement(Student *students,int *n ) {
    Student *students
}

int main() {
    FILE *textFile = fopen("students.txt", "r");
    if (textFile == NULL) {
        printf("Error opening file");
        return 1;
    }
    int count = 0;
    Student temp;
    while (fread(&temp, sizeof(Student), 1, textFile) ==1) count++;

    fseek(textFile, 0, SEEK_SET);

    Student * students = (Student *) malloc(count * sizeof(Student));
    if (students == NULL) {
        printf("Error allocating memory");
        fclose(textFile);
        return 1;
    }
    fread(students, sizeof(Student), count, textFile);
    fclose(textFile);
    return 0;
}
