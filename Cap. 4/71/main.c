#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Introduceti primul sir: ");
    fgets(str1, 100, stdin);

    printf("Introduceti al doilea sir: ");
    fgets(str2, 100, stdin);

    printf("Caracterele comune sunt: ");

    for(int i = 0; str1[i] != '\0'; i++) {
        if(strchr(str2, str1[i]) != NULL && str1[i] != ' ' && str1[i] != '\n') {
            printf("%c ", str1[i]);
        }
    }

    return 0;
}
