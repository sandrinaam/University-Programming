#include <stdio.h>
 
int main() {
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
 
    printf("Enter x1:");
    scanf("%d", &x1);
    printf("Enter y1:");
    scanf("%d", &y1);
    printf("Enter x2:");
    scanf("%d", &x2);
    printf("Enter y2:");
    scanf("%d", &y2);
    printf("Enter x3:");
    scanf("%d", &x3);
    printf("Enter y3:");
    scanf("%d", &y3);
 
 
    printf("%d", (x1 *(y2-y3) + x2 *(y3- y1) + x3* (y1-y2)) /2 );
 
 
 
 
    return 0;
}
