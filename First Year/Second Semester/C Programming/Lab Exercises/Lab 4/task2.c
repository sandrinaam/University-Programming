#include <stdio.h>
int main() {
    int arr[7];
    int max = - 301;
    for (int i = 1; i <=7; i++) {
        do {
            printf("Enter a number: ");
            scanf("%d", &arr[i]);
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        while (arr[i] < -300 || arr[i] > 300);

    }
    printf("The max number is: %d\n", max);
    return 0;
}
