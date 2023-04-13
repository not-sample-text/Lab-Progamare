#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, lim;

    printf("baga n: ");
    scanf("%d", &n);

    printf("baga limita: ");
    scanf("%d", &lim);

    for(i = 1; i <= lim; ++i){
        printf("%3d x %2d = %3d\t", i, n, i*n);
        if(i%3==0)printf("\n");
    }
    return 0;
}
