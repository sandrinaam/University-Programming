#include <stdio.h>
 
int main() {
    int n;
    printf("n=");
    scanf("%d", &n);
 
    for(int counter=1;counter <=n;counter ++){
      for(int num=1; num<= counter; num++){
          printf("%d ", counter);
      }
      printf("\n");
    }
 
    return 0;
}
