#include <stdio.h>
int main() {
    int arr[7];
    int sum = 0;
    int count = 0;
    int result;
    for (int i = 1; i <=7; i++) {
        do {
            printf("Enter a number: ");
            scanf("%d", &arr[i]);
            sum += arr[i];
            count++;

        }
        while (arr[i] < -300 || arr[i] > 300);
        result = sum / count;

    }
    printf("The result is: %d\n", result);
    return 0;
}
