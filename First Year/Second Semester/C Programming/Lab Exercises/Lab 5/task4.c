#include <stdio.h>
int main() {
    int x = 5,y= 4,*p,*q;
    p = &x;
    q = &y;

    int sum = *p + *q;
    printf("Sum is:%d\n",sum);

    int razlika = *p - *q;
    printf("Razlika: %d\n",razlika);

    int umnojenie = *p * *q;
    printf("Umnojenie: %d\n",umnojenie);

    int delenie = *p / *q;
    printf("Delenie: %d\n",delenie);
    return 0;
}
