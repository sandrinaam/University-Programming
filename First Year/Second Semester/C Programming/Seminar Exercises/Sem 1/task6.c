#include <stdio.h>
 
int main() {
    float a;
    float b;
    float h;
 
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter h:");
    scanf("%f",&h);
 
    printf("%.2f", (a + b) / 2 * h);
 
    return 0;
}
 
