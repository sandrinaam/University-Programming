#include <stdio.h>
 
int main() {
   char s;
   char ss;
   printf("Enter character 1:");
   scanf("%c", &s);
   printf("Enter character 2:");
   scanf(" %c", &ss);
   printf("%d", s - ss);
 
    return 0;
}
