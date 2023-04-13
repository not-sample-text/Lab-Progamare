#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];

    printf("Introduceti sirul de caractere: ");
    fgets(str, sizeof(str), stdin);

    printf("Introduceti sub-sirul cautat: ");
    fgets(sub, sizeof(sub), stdin);

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    if (strstr(str, sub) != NULL) {
        printf("Sub-sirul '%s' a fost gasit in sirul '%s'.\n", sub, str);
    } else {
        printf("Sub-sirul '%s' NU a fost gasit in sirul '%s'.\n", sub, str);
    }

    return 0;
}
