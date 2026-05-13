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
    printf("The array is:\n");
    for (int i = 0; i < n / 2; i++) {
        int check;
        check = arr[i];
        arr[i] = arr[n- i -1]
        arr[n- i - 1] = check
    }

    printf("The final array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
