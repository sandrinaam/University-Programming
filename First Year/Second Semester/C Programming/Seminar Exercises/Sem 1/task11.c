#include <stdio.h>
 
int main() {
    int n;
    int width;
    int length;
    int m;
    int o;
 
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter width:");
    scanf("%d", &width);
    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter m:");
    scanf("%d", &m);
    printf("Enter o:");
    scanf("%d", &o);
 
    int size = n * n;
    int floor_size = width * length;
    int peika_size = m * o;
 
    float plochki = size - peika_size / floor_size;
    float time = plochki * 0.2;
 
    printf("%.2f\n", plochki);
    printf("%.2f\n", time);
 
 
 
 
    return 0;
}
