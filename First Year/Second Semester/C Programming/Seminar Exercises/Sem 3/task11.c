#include <stdio.h>
int main() {
    int arr[100];

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int max_index = 0;
    int min = 100000;
    int min_index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }
    printf("The maximum element is: %d\n", max);
    printf("The index of maximum element is: %d\n", max_index);

    printf("The minimum element is: %d\n", min);
    printf("The index of minimum element is: %d\n", min_index);
    return 0;
}
