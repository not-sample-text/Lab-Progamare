#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i = 0, len;
    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);
    i = len;

    printf("ata invers: ");
    do
    {
        printf("%c", str[i]);
        i--;
    }
    while(i >= 0);
    return 0;
}
