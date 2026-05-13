#include <stdio.h>
 
int main() {
    float degrees;
 
    printf("Enter degrees:");
    scanf("%f", &degrees);
 
    printf("Farrenheit degrees are %.2f", degrees * 9/5 + 32);
 
 
    return 0;
}
