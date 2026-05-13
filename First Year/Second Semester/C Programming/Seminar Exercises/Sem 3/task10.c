#include <stdio.h>
int main() {
    int n;
    printf("Enter a length of array:\n ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter array element: ");
        scanf("%d", &arr[i]);
    }

    int x;
    int count = 0;
    printf("Enter a number to be searched:\n ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count ++;
        }
    }
    printf("The array is:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d\n", arr[i]);
    }
    printf("The count of %d is: %d\n", x, count);

    return 0;
}
