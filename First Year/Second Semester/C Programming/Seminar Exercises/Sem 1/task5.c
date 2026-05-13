#include <stdio.h>
 
int main() {
    float lv;
 
    printf("Enter BGN:");
    scanf("%f", &lv);
 
    printf(" USD: %.2f\n", lv * 0.604);
    printf(" GBP: %.2f\n", lv * 0.45);
    printf(" EUR: %.2f\n", lv / 1.95583);
 
 
 
    return 0;
}
