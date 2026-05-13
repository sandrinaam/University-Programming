#include <stdio.h>
#include <stdlib.h>
int main() {
    int p;
    printf("Enter p: ");
    scanf("%d", &p);

    double *arr;
    arr = (double *)malloc(sizeof(double) * p);
    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < p; i++) {
        if (i == 0) {
            printf("Enter the first number: ");
            scanf("%lf", &arr[i]);
        }
        else {
            do {
                printf("Enter number: ");
                scanf("%lf", &arr[i]);

                if (arr[i] <= arr[i-1]) {
                    printf("Invalid number");
                }
            }
            while (arr[i] <= arr[i-1]);
        }
    }

    for (int i = 0; i < p; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    double first_sum = 0;
    for (int i = 0; i < p; i++) {
        first_sum += arr[i];
    }
    printf("First sum: %lf\n", first_sum);

    int q;
    printf("Enter q: ");
    scanf("%d", &q);

    double *u = (double *)realloc(arr, sizeof(double) * q);
    if (u == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    arr = u;
    for (int i = p; i < q; i++) {
        if (i == p) {
            printf("Enter the first number: ");
            scanf("%lf", &arr[i]);
        }
        else {
            do {
                printf("Enter a number: ");
                scanf("%lf", &arr[i]);

                if (arr[i] <= arr[i-1]) {
                    printf("Invalid number");
                }
            }
            while (arr[i] <= arr[i-1]);
        }
    }

    for (int i = 0; i < q; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    double second_sum = 0;
    for (int i = 0; i < q; i++) {
        second_sum += arr[i];
    }
    printf("Second sum: %lf\n", second_sum);

    double max_element = -1;
    for (int i = 0; i < q; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    printf("Max element is: %lf\n", max_element);
    return 0;
}
