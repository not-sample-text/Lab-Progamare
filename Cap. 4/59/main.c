#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char letter;
    char *word;

    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);

    printf("Introduceti o litera: ");
    scanf("%c", &letter);

    word = strtok(str, " \t\n");
    while (word != NULL) {
        if (strchr(word, letter) != NULL) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " \t\n");
    }

    return 0;
}
