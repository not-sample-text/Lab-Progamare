#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100], i = 0, len, sum = 0;

    printf("Baga numere (0 = stop)");

    while(1)
    {
        printf("\nbaga nr. %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0) break;
        sum += n[i];
        i++;
    }

    printf("\nsum: %d", sum);
    return 0;
}
