#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid! Not enough numbers.");
    }
    else {
        int biggest_num;
        int biggest_index;
        for (int j = 0; j < k; j++) {
            biggest_num = INT_MIN;

            for (int i = 0; i < n; i++) {
                if (arr[i] > biggest_num) {
                    biggest_num = arr[i];
                    biggest_index = i;
                }
            }
            arr[biggest_index] = INT_MIN;
        }
        printf("The biggest element is: %d\n", biggest_num);
    }
    return 0;
}
