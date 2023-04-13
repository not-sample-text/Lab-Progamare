#include <stdio.h>
#include <stdlib.h>

void tabla_inmultirii(int nr, int lim)
{
    int i;

    for(i = 1; i <= lim; ++i)
    {
        printf("%3d x %2d = %3d\n", i, nr, i*nr);
    }
}

int main()
{
    int nr,lim;

    printf("baga nr: ");
    scanf("%d", &nr);

    printf("baga limita: ");
    scanf("%d", &lim);

    tabla_inmultirii(nr, lim);
}
