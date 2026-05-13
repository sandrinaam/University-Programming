#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp = fopen("first.bin", "rb");
    if (fp == NULL) {
        return 1;
    }
    int current_number;
    int even_number = 0;
    int odd_number = 0;

    while (fread(&current_number, sizeof(int), 1, fp) == 1) {
        for (int i = 0; i < current_number; i++) {
            fread(&current_number, sizeof(int), 1, fp);
            if (current_number % 2 == 0) {
                even_number++;
            }
            else if (current_number % 2 == 1) {
                odd_number++;
            }
        }
    }

    fclose(fp);
    printf("even_number = %d\n", even_number);
    printf("odd_number = %d\n", odd_number);


    return 0;
}
