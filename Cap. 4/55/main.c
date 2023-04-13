#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i = 0, voc = 0, con = 0, len;
    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);
    do
    {
        if(isalpha(str[i]))
        {
            switch(tolower(str[i]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                voc++;
                break;
            default:
                con++;
                break;
            }
        }
        i++;
    }
    while(i < len && i < 1000);

    printf("\nnumar vocale: %d", voc);
    printf("\nnumar consoane: %d", con);
    return 0;
}
