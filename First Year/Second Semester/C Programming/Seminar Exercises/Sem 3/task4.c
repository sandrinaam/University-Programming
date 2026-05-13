#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Initial array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;
    int result[n];

    for (int i = 0; i < n; i++) {
        if ((i + k) >= n) {
            result[i + k + n] = arr[i];
        }
        else {
            result[i + k] = arr[i];
        }
    }

    printf("Final array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
