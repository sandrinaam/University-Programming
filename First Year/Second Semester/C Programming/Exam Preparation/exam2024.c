#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Medicine {
    char name[30];
    char expirationDate[8];
    long long int id;
    double price;
    int quantity;
}Medicine;

void promotion(Medicine *medicines, int n, char date[8]) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(medicines[i].expirationDate, date) == 0) {
            double old_price = medicines[i].price;
            medicines[i].price *= 0.8;
            found++;
            printf("%s - %s - %.2f - %.2f\n", medicines[i].name, medicines[i].expirationDate, old_price, medicines[i].price);
        }
    }
    if (found == 0) {
        printf("No such medicsments.\n");
    }
}

void offer(Medicine *medicines, int n, int quantity) {
    FILE *binaryFile = fopen("offer.bin", "wb");
    if (binaryFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        if (medicines[i].quantity > quantity) {
            fwrite(&medicines[i], sizeof(Medicine), 1, binaryFile);
        }
    }
    fclose(binaryFile);
}

Medicine* deleteMedicine(Medicine * medicines, int *n, long long int id) {
    int found = 0;
    for (int i = 0; i < *n;) {
        if (medicines[i].id == id) {
            for (int j = i; j < *n; j++) {
                medicines[j] = medicines[j + 1];
            }
            (*n)--;
            found++;
        }
        else {
            i++;
        }
    }
    if (found == 0) {
        printf("No such medicine.\n");
        return medicines;
    }

    if (*n == 0) {
        free(medicines);
        return NULL;
    }
    return realloc(medicines, *n * sizeof(Medicine));
}

int main() {
    FILE *textFile = fopen("medicines.txt", "r");
    if (textFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    int count = 0;
    Medicine *tempMedicine;
    while (fread(&tempMedicine, sizeof(char), 1, textFile) == 1) {
        count++;
    }

    fseek(textFile, 0, SEEK_SET);
    Medicine *medicines = (Medicine *)malloc(sizeof(Medicine) * count);
    if (medicines == NULL) {
        printf("Error allocating memory.\n");
        fclose(textFile);
        return 1;
    }
    for (int i = 0; i < count; i++) {
        fscanf(textFile, "%s;%s;%lld;%lf;%d", medicines[i].name,medicines[i].expirationDate,medicines[i].id,medicines[i].price,medicines[i].quantity);
    }
    fclose(textFile);
    free(medicines);
    return 0;
}
