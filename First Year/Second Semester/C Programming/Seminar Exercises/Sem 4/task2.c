#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    int arr[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("Enter an element: ");
            scanf("%d",&arr[i][j]);
        }
    }

    int max_sum = 0;
    int number;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if ((arr[i][j-1] + arr[i][j+1]) > max_sum)  {
                max_sum = arr[i][j-1] + arr[i][j+1];
                number = arr[i][j];
            }
            if ((arr[i-1][j] + arr[i+1][j]) > max_sum){
                max_sum = arr[i-1][j] + arr[i+1][j];
                number = arr[i][j];
            }
            if ((arr[i-1][j-1] + arr[i+1][j-1]) > max_sum) {
                max_sum = arr[i-1][j-1] + arr[i+1][j-1];
                number = arr[i][j];
            }
        }
    }
    printf("Searched num is: %d", number);
    return 0;
}
