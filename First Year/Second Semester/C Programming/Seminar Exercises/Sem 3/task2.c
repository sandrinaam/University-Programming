#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    int arr[n];
    bool is_true = true;

    for(int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (arr[i] > arr[i + 1]) {
                is_true = false;
                break;
            }
        }
        else {
            if (arr[i] < arr[i + 1]) {
                is_true = false;
                break;
            }
        }
    }
    if (is_true) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
