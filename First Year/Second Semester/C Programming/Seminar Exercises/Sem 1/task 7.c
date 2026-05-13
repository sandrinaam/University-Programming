#include <stdio.h>
 
int main() {
    int x1;
    int y1;
    int x2;
    int y2;
 
    printf("Enter x1:");
    scanf("%d", &x1);
    printf("Enter y1:");
    scanf("%d", &y1);
    printf("Enter x2:");
    scanf("%d", &x2);
    printf("Enter y2:");
    scanf("%d", &y2);
 
    printf("%d", (x2-x1) * (y2-y1));
 
 
 
 
    return 0;
}
