#include <stdio.h>

int main() {
    int seconds;
    int result = 0;
    int minute;
    int new_seconds;

    for (int i = 1; i <= 3; i++) {

        printf("Enter seconds: ");
        scanf("%d", &seconds);
        result += seconds;

    }

    minute = result / 60;
    new_seconds = result % 60;

    if (new_seconds <= 9) {
        printf("The total time is: %d:0%d\n",minute, new_seconds);
    }
    else if (new_seconds > 9) {
        printf("The total time is: %d:%d\n", minute, new_seconds);
    }
    return 0;
}
