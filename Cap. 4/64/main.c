#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    printf("Sirul inversat este: ");
    for (int i = len-2; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
