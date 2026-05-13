#include <stdio.h>
 
int main() {
    float degrees;
 
    printf("Enter degrees:");
    scanf("%f", &degrees);
 
    printf("Radians are %.2f", degrees * 3.14/180);
 
 
    return 0;
}
