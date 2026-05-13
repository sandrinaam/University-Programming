#include <stdio.h>
int main() {
    int x= 10;
    int *p;
    p = &x;
    printf("Address of x: %d\n", p);
    printf("Value of x: %d\n", *p);
    return 0;
}
