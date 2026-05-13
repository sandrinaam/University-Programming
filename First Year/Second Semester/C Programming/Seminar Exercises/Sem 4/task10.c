#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int m;
    printf("Enter number of cells: ");
    scanf("%d", &m);

    int **A = (int**) malloc((n+ 1) * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*) malloc((m) * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element: ");
            scanf("%d", &A[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += A[i][j];
        }
        A[n][j] = sum;

    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < m + 1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}
