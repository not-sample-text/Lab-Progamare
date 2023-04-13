#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100], i = 0, max = 0;

    printf("Baga numere (0 = stop)");

    while(1)
    {
        printf("\nbaga nr. %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0) break;
        if(n[i] > max) max = n[i];
        i++;
    }

    printf("\nNum max: %d", max);
    return 0;
}
