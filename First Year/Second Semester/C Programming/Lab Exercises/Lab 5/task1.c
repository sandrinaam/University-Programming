#include <stdio.h>

int main() {
    int first_array[3][3];
    int main_diagonal = 0;
    int second_diagonal = 0;
    int upper_main_diagonal = 0;
    int lower_main_diagonal = 0;

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("Enter an element:");
            scanf("%d", &first_array[r][c]);
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (r==c) {
                main_diagonal += first_array[r][c];
            }
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (r+ c == 2) {
                second_diagonal += first_array[r][c];
            }
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (r >c) {
                lower_main_diagonal += first_array[r][c];
            }
        }
    }
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (r < c) {
                upper_main_diagonal += first_array[r][c];
            }
        }
    }

    printf("Main Diagonal = %d\n", main_diagonal);
    printf("Second Diagonal = %d\n", second_diagonal);
    printf("Upper Main Diagonal = %d\n", upper_main_diagonal);
    printf("Lower Main Diagonal = %d\n", lower_main_diagonal);
    return 0;

}
