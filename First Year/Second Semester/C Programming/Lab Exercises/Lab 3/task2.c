#include <stdio.h>
 
void switchNums(double *a, double *b){
    double c;
    c = *a;
    *a = *b;
    *b = c;
}
 
int main(){
    double a;
    double b;
 
    printf("A is:");
    scanf("%lf", &a);
 
    printf("B is:");
    scanf("%lf", &b);
 
    switchNums(&a, &b);
 
    printf("A is now %.2lf\n", a);
    printf("B is now %.2lf\n", b);
 
    return 0;
}
