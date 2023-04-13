#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100], i = 0, len, sum = 0;

    float med;

    printf("Baga numere (0 = stop)");

    while(1)
    {
        printf("\nbaga nr. %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0) break;
        sum += n[i];
        i++;
    }

    len = i;
    med = sum / len;
    i = 0;

    printf("\nnumere mai mari decat media: ");

    while(i < len)
    {
        if(n[i] > med) printf("%d, ", n[i]);
        i++;
    }

    return 0;
}
