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

    int max_length = 1;
    int start_index = 0;

    int current_length = 1;
    int current_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;

            if (current_length > max_length) {
                max_length = current_length;
                start_index = current_index;
            }
        }


        else {
            current_length = 1;
            current_index = i;
        }
    }


    printf("The maximum length is: %d\n", max_length);
    printf("The array is:");
    for (int i = start_index; i < start_index + max_length; i++) {
        printf(" %d", arr[i]);
    }
    return 0;
}
