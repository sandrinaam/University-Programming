#include <stdio.h>
 
double squareArea(double a){
    return a * a;
}
 
double rectangleArea(double a, double b){
    return a * b;
}
 
double triangleArea(double a, double b){
    return (a * b) / 2;
}
 
double circleArea(double r){
    return 3.14 * r * r;
}
 
int main(){
 
    int num;
    double a, b, r, result;
 
    printf("Choose figure:");
    scanf("%d", &num);
 
    switch (num){
 
        case 1:
            printf("Figure is square\n");
            printf("A is: ");
            scanf("%lf", &a);
            result = squareArea(a);
            printf("Area is: %.2lf\n", result);
            break;
 
        case 2:
            printf("Figure is rectangle\n");
            printf("A is: ");
            scanf("%lf", &a);
            printf("B is: ");
            scanf("%lf", &b);
            result = rectangleArea(a, b);
            printf("Area is: %.2lf\n", result);
            break;
 
        case 3:
            printf("Figure is right triangle\n");
            printf("A is: ");
            scanf("%lf", &a);
            printf("B is: ");
            scanf("%lf", &b);
            result = triangleArea(a, b);
            printf("Area is: %.2lf\n", result);
            break;
 
        case 4:
            printf("Figure is circle\n");
            printf("R is: ");
            scanf("%lf", &r);
            result = circleArea(r);
            printf("Area is: %.2lf\n", result);
            break;
 
        default:
            printf("Invalid figure\n");
    }
 
    return 0;
}
