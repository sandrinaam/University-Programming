#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int m;
    printf("Enter m: ");
    scanf("%d", &m);

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    int max_num = INT_MIN;
    int min_num = INT_MAX;
    int min_row = 0;
    int max_row = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max_num) {
                max_num = arr[i][j];
                max_row = i;
            }
            if (arr[i][j] < min_num) {
                min_num = arr[i][j];
                min_row = i;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        int try = arr[min_row][j];
        arr[min_row][j] = arr[max_row][j];
        arr[max_row][j] = try;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
