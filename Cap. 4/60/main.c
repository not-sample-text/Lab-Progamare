#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char search[10];
    char *word, *found;

    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);

    printf("Introduceti un sir de cautare: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    word = strtok(str, " \t\n");
    while (word != NULL) {
        found = strstr(word, search);
        if (found != NULL) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " \t\n");
    }

    return 0;
}
