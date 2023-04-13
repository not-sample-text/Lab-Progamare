#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, len, num = 0, upp = 0, low = 0, spec = 0;
    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);
    for(i = 0; i < len; i++){
        if(isdigit(str[i])) num++;
        else if(isupper(str[i])) upp++;
        else if(islower(str[i])) low++;
        else spec++;
    }

    printf("\nnumere: %d", num);
    printf("\nmajuscule: %d", upp);
    printf("\nlitere mici: %d", low);
    printf("\ncaractere speciale: %d", spec-1);
    return 0;
}
