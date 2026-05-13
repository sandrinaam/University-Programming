#include <stdio.h>
int main() {
     int n;
     printf("Enter a length of array:\n ");
     scanf("%d", &n);

     int arr[n];

     printf("Enter element:\n ");
     scanf("%d", &arr[0]);

     for (int i = 1; i < n; i++) {
         int check;
         do {
             printf("Enter element:");
             scanf("%d", &check);
             if (check < arr[i - 1]) {
                 printf("Invalid input.\n");
             }
         }
         while (check < arr[i - 1]);
         arr[i] = check;
     }

     int max_length = 1;
     int max_index = 0;

     int current_length = 1;
     int current_index = 0;

     for (int i = 1; i < n; i++) {
         if (arr[i] == arr[i - 1]) {
             current_length++;
         }
         else {
             current_length = 1;
             current_index = i;
         }
     }

     if (current_length > max_length) {
         max_length = current_length;
         max_index = current_index;
     }

     printf("The maximum length is: %d\n", max_length);
     printf("The start is: %d\n", max_index);
     return 0;
 }
