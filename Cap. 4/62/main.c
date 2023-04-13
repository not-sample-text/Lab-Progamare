#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int is_palindrome = 1;

    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0;
            break;
        }
    }

if (is_palindrome) {
    printf("%.*s este palindrom", len , str);
} else {
    printf("%.*s nu este palindrom", len , str);
}


    return 0;
}
