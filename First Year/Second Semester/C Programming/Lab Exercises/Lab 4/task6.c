#include <stdio.h>

int words(char str[]) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            count++;
        }
        i++;
    }
    return count+ 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);
    int word = words(str);
    printf("The words in string are: %d", word);
    return 0;
}
