#include <stdio.h>
#include <string.h>

int main() {
    double chair_1 = 13.99;
    double table_for_8 = 42.00;
    double cups_for_6 = 5.98
    double dishes_for_6 = 21.02;

    int bought_chair = 0;
    int bought_table = 0;
    int bought_cups = 0;
    int bought_dishes = 0;

    int guests;
    printf("Enter number of guests: ");
    scanf("%d", &guests);

    char command [50];
    double money_spent = 0.00;

    while (1) {
        printf("Enter command: ");
        scanf("%s", command);

        if (strcmp(command, "PARTY!") == 0) {
            break;
        }
        if (strcmp(command, "Chair") == 0) {
            bought_chair++;
            money_spent += chair_1;
        }
        else if (strcmp(command, "Table") == 0) {
            bought_table++;
            money_spent += table_for_8;
        }
        else if (strcmp(command, "Cups") == 0) {
            bought_cups++;
            money_spent += cups_for_6;
        }
        else if (strcmp(command, "Dishes") == 0) {
            bought_dishes++;
            money_spent += dishes_for_6;
        }
    }
    int diff_chairs = guests - bought_chair;

    int needed_tables = guests / 8;
    if (needed_tables == 0) {
        needed_tables = 0;
    }
    else if (needed_tables > 0) {
        needed_tables++;
    }
    int diff_tables = needed_tables - bought_table;

    int needed_cups = guests / 6;
    if (needed_cups == 0) {
        needed_cups = 0;
    }
    else if (needed_cups > 0) {
        needed_cups++;
    }
    int diff_cups = needed_cups - bought_cups ;

    int needed_dishes = guests / 6;
    if (needed_dishes == 0) {
        needed_dishes = 0;
    }
    else if (needed_dishes > 0) {
        needed_dishes++;
    }
    int diff_dishes = needed_dishes - bought_dishes;

    printf("Total spent: %.2f", money_spent);
    if (diff_chairs > 0) {
        printf(" Chairs needed: %d", diff_chairs);
    }
    if (diff_tables > 0) {
        printf(" Tables needed: %d", diff_tables);
    }
    if (diff_cups > 0) {
        printf(" Cups needed: %d", diff_cups);
    }
    if (diff_dishes > 0) {
        printf(" Dishes needed: %d", diff_dishes);
    }
   return 0;
}
