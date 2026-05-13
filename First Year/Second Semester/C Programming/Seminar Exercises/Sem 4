#include <stdio.h>

int main() {
    int m;
    printf("Enter m: ");
    scanf("%d", &m);

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[m][n];

    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {
            do {
                printf("Enter element: ");
                scanf("%d", &arr[i][j]);
            }
            while ((j > 0 && arr[i][j] <= arr[i][j-1]) || (i > 0 && arr[i][j] >= arr[i-1][j]));
        }
    }
    printf("The array is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
