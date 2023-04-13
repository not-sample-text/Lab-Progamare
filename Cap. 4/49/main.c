#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, len, cuv = 0;

    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);
    for(i = 0; i < len; i++){
        if(isspace(str[i])){
            cuv++;
        }
    }

    printf("nr cuv: %d.", cuv);
    return 0;
}
