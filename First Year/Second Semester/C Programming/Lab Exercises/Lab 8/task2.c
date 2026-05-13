#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        do {
            printf("Enter number: ");
            scanf("%d", &arr[i]);
        }
        while (arr[i] < 999 || arr[i] > 9999);
    }

    int arr2[n];
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j];
        }
    }
    return 0;
}
