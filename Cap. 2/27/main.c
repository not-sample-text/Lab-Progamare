#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100], i = 0, len, poz = 0, neg = 0;

    printf("Baga numere (0 = stop)");

    while(1)
    {
        printf("\nbaga nr. %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0) break;
        else if(n[i] < 0) neg++;
        else poz++;
        i++;
    }

    printf("\nNum poz: %d", poz);
    printf("\nNum neg: %d", neg);
    return 0;
}
