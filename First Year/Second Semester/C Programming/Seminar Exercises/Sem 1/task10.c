#include <stdio.h>
 
int main() {
    float pricev;
    float pricef;
    float kgv;
    float kgf;
 
    printf("Enter pricev:");
    scanf("%f", &pricev);
    printf("Enter pricef:");
    scanf("%f", &pricef);
    printf("Enter kgv:");
    scanf("%f", &kgv);
    printf("Enter kgf:");
    scanf("%f", &kgf);
 
    printf("%.2f", (pricev * kgv + pricef * kgf) / 1.95);
 
 
 
 
    return 0;
}
