#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n = 4;
    int m = 5;
    int **A = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*) malloc((m+1) * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element: ");
            scanf("%d", &A[i][j]);
        }
    }

    int min_sum = INT_MAX;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += A[i][j];
        }
        A[i][m] = sum;
        if (sum < min_sum) {
            min_sum = sum;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m + 1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", min_sum);

    return 0 ;
}
