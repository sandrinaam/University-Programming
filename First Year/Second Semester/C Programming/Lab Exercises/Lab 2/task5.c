#include <stdio.h>
 
int main() {
    int n, k;
 
    printf("n=");
    scanf("%d", &n);
    printf("k=");
    scanf("%d", &k);
 
    int count = 0;
    printf("Enter %d numbers", n);
    for(int i =0; i <n; i++){
        int num;
        scanf("%d", &num);
        if (num >k && num % 3 ==0){
            count++;
        }
    }
    printf("Count: %d\n", count);
 
 
 
    return 0;
}
