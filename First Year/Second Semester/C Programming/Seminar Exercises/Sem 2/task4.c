#include <stdio.h>

int main() {
    int num;
    double bonus = 0;
    double result;

    printf("Enter a number:");
    scanf("%d",&num);

    if (num % 2 == 0) {
        bonus += 1;
    }

    else if (num % 5 == 0) {
        bonus += 2;
    }

    if (num <= 100) {
        bonus += 5;
    }

    else if (num <= 1000 && num >= 100) {
        bonus += 0.2 * num;
    }

    else if (num >= 1000) {
        bonus += num * 0.1;
    }

    result = num + bonus;
    printf("The result is %.1lf",result);


    return 0;
}
