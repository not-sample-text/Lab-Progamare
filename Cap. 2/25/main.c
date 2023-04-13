#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{
    int n[MAX_LENGTH], max, min, i, len;
    printf("Baga numere (0 sa te opresti)\n");

    for(i = 0; i < MAX_LENGTH; i++)
    {
        printf("baga nr. %d: ", i+1);
        scanf("%d", &n[i]);

        if(n[i] == 0) {
            break;
        }
    }

    len = i;

    max = n[0];
    min = n[0];

    for(i = 1; i < len; i++)
    {
        if(n[i] > max)
        {
            max = n[i];
        }
        if(n[i] < min)
        {
            min = n[i];
        }
    }

    printf("Cel mai mare element este %d\n", max);
    printf("Cel mai mic element este %d\n", min);

    return 0;
}
