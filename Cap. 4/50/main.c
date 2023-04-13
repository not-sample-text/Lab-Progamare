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
    for(i = 0; i < len; i++)
    {
        switch(tolower(str[i]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            for(j = i; j < len; j++)
            {
                str[j] = str[j+1];
            };
            len--;
            i--;
            break;
        }
    }

    printf("ata fara vocale: ");
    for(i = 0; i < len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
