#include <stdio.h>

int vowels(char str[]) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);
    int result = vowels(str);
    printf("The vowels in string are: %d", result);
    return 0;
}
