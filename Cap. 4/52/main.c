#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i, j, max = 0, curr = 0, len;

    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if(!isspace(str[i]))
        {
            curr++;
        }
        else
        {
            if(curr > max) max = curr;
            curr = 0;
        }
    }

    printf("cel mai mare string: %d litere", max);
    return 0;
}
