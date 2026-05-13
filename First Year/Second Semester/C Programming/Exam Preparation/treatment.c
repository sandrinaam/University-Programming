#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Treatment {
    int id;
    char date[11];
    char name[31];
    char diagnose[51];
}Treatment;

int count_treatment(Treatment treatments[], int n, char name[],char diagnose[51]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(treatments[i].name, name) == 0 && strcmp(treatments[i].diagnose, diagnose) == 0) count++;
    }
    return count;
}

Treatment* add_new_treatment(Treatment *treatments, int *n) {
    Treatment *temp = (Treatment*) realloc(treatments, (*n+1) * sizeof(Treatment));
    if (temp == NULL) {
        printf("Out of memory");
        return NULL;
    }
    treatments = temp;
    printf("Enter id: \n");
    scanf("%d", &treatments[*n].id);
    printf("Enter date: \n");
    scanf("%s", treatments[*n].date);
    printf("Enter name: \n");
    scanf("%s", treatments[*n].name);
    printf("Enter diagnose: \n");
    scanf("%s", treatments[*n].diagnose);
    (*n)++;
    return treatments;
}

int write_text_file(Treatment *treatments,int n,char diagnose[]) {
    FILE *f = fopen("illness.txt", "w");
    if (f == NULL) {
        printf("File could not be created");
        exit(1);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(treatments[i].diagnose, diagnose) == 0) {
            fprintf(f, "Болничен престой на <%s>\n за лечение на <%s>:\n <%s>\n",
                treatments[i].name, treatments[i].diagnose, treatments[i].date);
            count++;
        }
    }
    fclose(f);
    return count;
}
int main() {
    FILE *f = fopen("history.bin", "rb");
    if (f == NULL) {
        printf("File could not be created");
        exit(1);
    }
    int n;
    if (fread(&n, sizeof(int), 1, f) != 1) {
        n = 0;
    }

    Treatment* history = (Treatment *)malloc(sizeof(Treatment)*n);
    if (history == NULL) {
        printf("Out of memory");
        fclose(f);
        exit(1);
    }
    if (n>0) {
        fread(history, sizeof(Treatment), n, f);
    }
    fclose(f);
    free(history);
    return 0;
}
