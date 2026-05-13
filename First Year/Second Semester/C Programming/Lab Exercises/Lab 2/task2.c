#include <stdio.h>
 
int main() {
    int a;
    int b;
 
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
 
    int sum = 0;
    int min = a;
    int max = b;
 
    if (a>b){
        min = b;
        max = a;
    }
 
    for(int i = min +1; i < max; i++){
      sum += i;
    }
    printf("Sum: %d\n", sum);
 
    return 0;
}
