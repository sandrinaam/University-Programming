#include <stdio.h>
int main() {
    int multiplier;
    printf("Enter a multiplier: ");
    scanf("%d", &multiplier);

    int count;
    printf("Enter a count: ");
    scanf("%d", &count);

    int arr[count];
    arr[0] = multiplier;
    for (int i = 1; i < count; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        while (arr[i] < arr[i - 1] || arr[i] % multiplier != 0) {
            printf("Wrong input! Try again:");
            scanf("%d", &arr[i]);
        }
    }
    return 0;
}
