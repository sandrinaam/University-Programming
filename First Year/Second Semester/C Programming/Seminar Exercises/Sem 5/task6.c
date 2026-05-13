#include <stdio.h>
#include <string.h>

int anagram(char * a, char * b) {
    int letters_1 = strlen(a);
    int letters_2 = strlen(b);

    if (letters_1 != letters_2) {
        return 1;
    }
    for (int i = 0; i < letters_1; i++) {
        int found = 0;

        for (int j = 0; j < letters_2; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (found != 1) {
            return 1;
        }}
    }

int main() {
    char a[100], b[100];

    printf("Please enter the first string: ");
    scanf("%s", a);

    printf("Please enter the second string: ");
    scanf("%s", b);

    int c = anagram(a, b);
    printf("The result is: %d", c);
}
