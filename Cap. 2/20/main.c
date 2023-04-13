#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{
    int n[MAX_LENGTH] = {0}, i, len, sum = 0;
    float med;
    printf("baga numere (0 sa te hopresti)\n");

    for(i = 0; i < MAX_LENGTH; i++){
        printf("baga nr. %d: ", i+1);
        scanf("%d", &n[i]);

        if(n[i] == 0) break;

        sum+=n[i];
    }

    len = i;
    med = sum / len;

    printf("Media: %.2f", med);
    return 0;
}
