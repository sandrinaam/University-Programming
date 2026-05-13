#include <stdio.h>
 
void odd_or_even(int a){
    if (a % 2 == 0){
      printf("Num is even");
    }
    else{
      printf("Num is odd");
    }
}
 
int main() {
    int num;
 
    printf("Num is:");
    scanf("%d", &num);
 
    odd_or_even(num);
 
 
 
    return 0;
}
