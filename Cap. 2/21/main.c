#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{
    int n[MAX_LENGTH] = {0}, i, sum = 0;
    printf("baga numere (0 sa te hopresti)\n");

    for(i = 0; i < MAX_LENGTH; i++){
        printf("baga nr. %d: ", i+1);
        scanf("%d", &n[i]);

        if(n[i] == 0) break;

        sum+=n[i];
    }


    printf("suma: %d", sum);
    return 0;
}
