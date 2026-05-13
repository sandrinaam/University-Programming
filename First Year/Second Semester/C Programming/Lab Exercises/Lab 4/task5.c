#include <stdio.h>

int leng(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i-1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);
    int len = leng(str);
    printf("The length of the string is: %d", len);
    return 0;

}
