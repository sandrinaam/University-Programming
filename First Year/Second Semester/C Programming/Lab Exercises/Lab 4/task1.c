#include <stdio.h>
int main() {
    int arr[7];
    int sum = 0;
    for (int i = 1; i <=7; i++) {
        do {
            printf("Enter a number: ");
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        while (arr[i] < -300 || arr[i] > 300);

    }
    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}
