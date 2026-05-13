#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("first.bin", "wb");
    if (fp == NULL) {
        return 1;
    }

    int n;
    int number;
    printf("Enter a number: ");
    scanf("%d", &n);

    fwrite(&n, sizeof(int), 1, fp);
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &number);
        fwrite(&number, sizeof(int),1,fp);
    }
    fclose(fp);
    printf("Program completed successfully.\n");

    return 0;
}
