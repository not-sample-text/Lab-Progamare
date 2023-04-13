#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{
    int n[MAX_LENGTH] = {0}, max, i, len;
    printf("Baga numere (0 sa te hopresti)\n");

    for(i = 0; i < MAX_LENGTH; i++){
        printf("baga nr. %d: ", i+1);
        scanf("%d", &n[i]);

        if(n[i]==0) break;
    }

    len = i;

    printf("Baga numarul de comparat: ");
    scanf("%d", &max);

    printf("numerele mai mari decat %d sunt: ", max);
    for(i = 0; i < len; i++){
        if(n[i] > max) printf("%d ", n[i]);

    }
    return 0;
}
