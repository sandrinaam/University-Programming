#include <stdio.h>

struct Student {
    char name[20];
    float grade;
};

struct Class {
    struct Student students[3];
};

struct Year {
    struct Class classes[2];
};

int main() {
    struct Year year;

    float sumClass = 0, sumYear = 0;

    for(int i = 0; i < 2; i++) {
        printf("Class %d\n", i+1);
        for(int j = 0; j < 3; j++) {
            printf("Student %d name and grade: ", j+1);
            scanf("%s %f", year.classes[i].students[j].name,
                           &year.classes[i].students[j].grade);

            sumClass += year.classes[i].students[j].grade;
        }

        printf("Average for class %d = %.2f\n", i+1, sumClass/3);
        sumYear += sumClass;
        sumClass = 0;
    }

    printf("Average for year = %.2f\n", sumYear / 6);

    return 0;
}
