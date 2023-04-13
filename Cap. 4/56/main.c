#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i = 0, j, freq[256] = {0};

    printf("baga ata: ");
    fgets(str, 1000, stdin);

    do
    {
        if(!isspace(str[i]))
        {
            freq[str[i]]++;
        }
        i++;
    }
    while (str[i] != '\0');

    printf("Frecventa fiecarui caracter din sir:\n\n");
    for (j = 0; j < 256; j++)
    {
        if (freq[j] != 0)
        {
            printf("\t%c: %d\n", j, freq[j]);
        }
    }
    return 0;
}
