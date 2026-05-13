#include <stdio.h>
int main() {
    int arr[7];
    int sum = 0;
    int count = 0;
    int result;
    int new_num;
    int new_num_i;

    for (int i = 1; i <=7; i++) {
        do {
            printf("Enter a number: ");
            scanf("%d", &arr[i]);
            sum += arr[i];
            count++;

        }
        while (arr[i] < -300 || arr[i] > 300);
        result = sum / count;

        new_num = arr[0];
        new_num_i = 0;

        for (int j = 1; j <=7; j++) {
            if (arr[j] == result) {
                new_num = arr[j];
                new_num_i = j;
            }
            else if (new_num > arr[j] && arr[j]  > result) {
                new_num = arr[j];
                new_num_i = j;
            }
            else if (new_num < arr[j]  && arr[j] < result) {
                new_num = arr[j];
                new_num_i = j;
            }
        }

    }
    printf("The result is: %d\n", result);
    printf("The closest number is: %d\n", new_num);
    printf("The index is: %d\n", new_num_i);
    return 0;
}
