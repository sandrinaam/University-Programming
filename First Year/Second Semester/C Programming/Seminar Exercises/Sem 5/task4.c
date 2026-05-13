#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    printf("Please enter name of file: ");
    scanf("%s", name);

    int key;
    do {
        printf("Enter a key: ");
        scanf("%d", &key);
    }
    while (key < 2 || key > 10);

    FILE *f = fopen(name, "r");
    if (f == NULL) {
        printf("File does not exist.\n");
        return 1;
    }
    FILE *m= fopen("file.txt", "w");
    if (m == NULL) {
        printf("File does not exist.\n");
        fclose(f);
        return 1;
    }
    int c;
    while ((c = fgetc(f)) != EOF) {
        c = c + key;
        fputc(c, m);
    }
    fclose(f);
    fclose(m);
    printf("File successfully operated.\n");
    return 0;
}
