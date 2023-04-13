#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i, j, len;
    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (isspace(str[i]) || ispunct(str[i])) {
            for (j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            i--;
            len--;
        }
    }

    printf("\nata fara alea: %s", str);
    return 0;
}
