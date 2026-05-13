#include <stdio.h>

int greatest_number(int a, int b) {
    int c;
    if (a > b) c = a;
    else c = b;
    return c;
}

int smallest_number(int a, int b) {
    int d;
    if (a < b) d = a;
    else d = b;
    return d;
}


int main() {

    int a;
    int b;

    printf("Enter 2 numbers:");
    scanf("%d%d",&a, &b);

    int c = greatest_number(a,b);
    int d = smallest_number(a,b);


    printf("The smallest number is: %d\n",c);
    printf("The largest number is: %d\n",d);


    while (1) {
        int new;
        printf("Enter number:");
        scanf("%d",&new);

        if (new == 0) {
            break;
        }

        else if (new > c) {
            printf("The largest number is: %d\n",new);

        }
        else if (new < d) {
            printf("The smallest number is: %d\n",new);
        }
    }
    return 0;
}
