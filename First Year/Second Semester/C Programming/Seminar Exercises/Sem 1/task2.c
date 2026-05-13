#include <stdio.h>
 
int main() {
    float inch;
 
    printf("Enter inches:");
    scanf("%f", &inch);
 
 
    printf("%.2f\n", inch * 25.4);
    printf("%.2f\n", inch * 2.54);
    printf("%.2f\n", inch * 0.254);
    printf("%.2f\n", inch * 0.0254);
 
 
 
 
    return 0;
}
