#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i = 0;
    int found = 0;

    printf("Introduceti un sir de caractere: ");
    fgets(str, 1000, stdin);

    printf("Cuvintele care contin cel putin o litera mare: ");

    while (str[i] != '\0') {
        if (isupper(str[i])) {
            found = 1;
            printf("%c", str[i]);

            while (str[i+1] != ' ' && str[i+1] != '\0') {
                i++;
                printf("%c", str[i]);
            }
            printf(" ");
        }
        i++;
    }

    if (!found) {
        printf("Nu exista cuvinte care contin cel putin o litera mare.");
    }

    return 0;
}
