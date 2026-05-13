#include <stdio.h>

void check_Num(int a, int b, int c) {

    if (a == b && a == c) {
        printf("yes");
    }
    else if (a > b && a > c) {
        printf("no");
    }
}

int main() {
    int a;
    int b;
    int c;

    printf("Enter a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);

    check_Num(a,b,c);

    return 0;
}
