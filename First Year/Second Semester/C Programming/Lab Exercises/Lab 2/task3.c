#include <stdio.h>
 
int main() {
    int a;
    int b;
 
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
 
    int sum_even = 0;
    int product_odd = 1;
    int min = a;
    int max = b;
 
 
    if (a>b){
        min = b;
        max = a;
    }
 
    for(int i = min +1; i < max; i++){
      if(i%2 == 0){
          sum_even +=i;
      }else if(i%2 == 1){
          product_odd *= i;
      }
    }
    printf("Sum of even: %d\n", sum_even);
    printf("Product of odd: %d\n", product_odd);
 
    return 0;
}
