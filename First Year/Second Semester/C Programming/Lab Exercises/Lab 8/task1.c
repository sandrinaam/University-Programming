#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] %2 == 0) {
            count_even++;
        }
        else {
            count_odd++;
        }
    }
    printf("Number of even elements: %d\n", count_even);
    printf("Number of odd elements: %d\n", count_odd);
    return 0;
}
