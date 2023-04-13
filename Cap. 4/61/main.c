#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    char *word;

    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);

    word = strtok(str, " \t\n");
    while (word != NULL) {
        if (isupper(word[0])) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " \t\n");
    }

    return 0;
}
