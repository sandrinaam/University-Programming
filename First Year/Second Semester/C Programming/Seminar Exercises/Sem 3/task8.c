#include <stdio.h>
int main() {
    int arr[20];

    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 10; i < 20; i++) {
        int new_value;
        printf("Enter a new value: ");
        scanf("%d", &new_value);

        if (new_value == 0) {
            break;
        }

        int index;
        printf("Enter index of new value: ");
        scanf("%d", &index);

        for (int j = 19; j > index; j--) {
            arr[j] = arr[j - 1];
        }
        arr[index] = new_value;
    }
    printf("The array is:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    return 0;
}
