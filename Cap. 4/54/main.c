#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i, len, flag = 1;
    printf("baga ata: ");
    fgets(str, 1000, stdin);

    len = strlen(str);

    for(i = 0; i < len; i++){
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }

        if(!isalnum(str[i])) {
            flag = 0;
            break;
        }
    }

    if(flag) {
        printf("%s\n", "yup");
    } else {
        printf("%s\n", "nope");
    }

    return 0;
}
