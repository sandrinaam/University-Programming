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

    int number;
    printf("Enter number: ");
    scanf("%d",&number);

    int start_index = -1;
    int length = 0;

    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=i;j<n;j++) {
            sum += arr[j];

            if (sum == number) {
                start_index = i;
                length = j - i + 1;
                break;
            }
            if (sum > number) {
                break;
            }
        }
    }
    printf("The subarrey is:");
    for(int i=start_index; i<start_index + length; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
