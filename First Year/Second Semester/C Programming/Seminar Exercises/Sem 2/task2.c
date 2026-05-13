#include <stdio.h>

int main () {
    int hour;
    int minute;
    int left_minute;

    printf ("Enter hour, minute: ");
    scanf ("%d%d", &hour, &minute);

    if (minute <= 44) {
        minute += 15;
    }
    else if (minute >= 45) {
        minute += 15;
        left_minute = minute - 60;
        hour += 1 ;
        minute = left_minute;
    }

    if (hour > 23) {
        hour = 0;
    }
    if (minute <= 9) {
        printf ("%d:%02d", hour, minute);
    }

    else if (minute >= 10) {
        printf ("%d:%d", hour, minute);
    }

    return 0;
}
