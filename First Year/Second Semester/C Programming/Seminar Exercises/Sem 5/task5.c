#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "programming";
    int length = strlen(word);

    char hidden[length];
    for (int i = 0; i < length; i++) {
        hidden[i] = "_";
    }

    int tries = 0;
    int guessed = 0;

    printf("Welcome to the game!");
    printf("The word is: %s ,length: %d", hidden, length);

    while (guessed != length) {
        char attempt;
        printf("Enter a letter: ");
        scanf("%c", &attempt);
        for (int i = 0; i < length; i++) {
            if (attempt == word[i]) {
                guessed++;
                printf("");
            }
        }
    }
    return 0;
}
