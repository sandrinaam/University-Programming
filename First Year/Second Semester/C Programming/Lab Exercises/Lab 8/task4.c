#include <stdio.h>
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

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
                count++;
            }
        }
    }

    int new_arr[count];
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
                new_arr[i] = arr[i][j];
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", new_arr[i]);
    }
    printf("\n");

    return 0;
}
