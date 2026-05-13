#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The array is:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int longest_index = 0;
    int longest_length = 1;

    int current_index = 0;
    int current_length = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            current_length++;
        }
        else {
            current_index = i + 1;
            current_length = 1;
        }

        if (current_length > longest_length) {
                longest_index = current_index;
                longest_length = current_length;
        }
    }
    current_index = 0;
    current_length = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            current_length++;
        }
        else {
            current_index = i + 1;
            current_length = 1;
        }
        if (current_length > longest_length) {
            longest_index = current_index;
            longest_length = current_length;
        }
    }

    printf("The longest is: ");
    for (int i = longest_index; i < longest_length + longest_index; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
