#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Medicine {
    char name[31];
    char expiration_date[8];
    long long int code;
    double price;
    int quantity;
};

int is_before(char *d1, char *d2) {
    int i;

    for (i = 3; i <=6; i++) {
        if (d1[i] < d2[i]) return 1;
        if (d1[i] > d2[i]) return 0;
    }

    for (i = 0; i <=1; i++) {
        if (d1[i] < d2[i]) return 1;
        if (d1[i] > d2[i]) return 0;
    }
    return 0;
}

struct Medicine *expired_medicine(struct Medicine *medicines, int num, char *date) {
    int i;
    int count = 0;

    for (i = 0; i < num; i++) {
        if (is_before(medicines[i].expiration_date, date)) {
            count++;
        }
    }
    if (count == 0) return NULL;

    struct Medicine *expired = (struct Medicine *)malloc(sizeof(struct Medicine) *count);
    if (expired == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    int j =0;
    for (i = 0; i < num; i++) {
        if (is_before(medicines[i].expiration_date, date)) {
            expired[j] = medicines[i];
            j++;
        }
    }
    return expired;
}

int offer(struct Medicine *medicines, int num, double min_price, double max_price) {
    FILE *fm = fopen("offer.txt", "a");
    if (fm == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    int i;
    int written = 0;

    for (i = 0; i < num; i++) {
        if (medicines[i].price >= min_price && medicines[i].price <= max_price) {
            fprintf(fm, "<%s>\n<%s>\n<%lld>\n<%.2f>\n",
       medicines[i].name, medicines[i].expiration_date, medicines[i].code, medicines[i].price);
            written++;
        }
    }
    fclose(fm);
    return written;
}

void delete_medicine(struct Medicine *medicines, int *num, char *name, char *date) {
    int i,j, found =0;
    for (i = 0; i < *num;) {
        if (strcmp(medicines[i].name, name) == 0 && strcmp(medicines[i].expiration_date, date) == 0) {
            for (j = i; j < (*num) - 1; j++) {
                medicines[j] = medicines[j + 1];
            }
            (*num)--;
            found = 1;
        }
        else {
            i++;
        }
    }
    if (found == 0) {
        printf("Error deleting medicine\n");
    }
}

int main() {
    FILE *f = fopen("medicines.bin", "rb");
    if (f == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    int count = 0;
    struct Medicine temp;
    while (fread(&temp, sizeof(struct Medicine), 1, f) == 1) {
        count++;
    }
    fseek(f, 0, SEEK_SET);

    struct Medicine *medicines = (struct Medicine *)malloc(sizeof(struct Medicine) * count);
    if (medicines == NULL) {
        printf("Error allocating memory\n");
        fclose(f);
        exit(1);
    }
    fread(medicines, sizeof(struct Medicine), count, f);
    fclose(f);
    free(medicines);
    return 0;
}
