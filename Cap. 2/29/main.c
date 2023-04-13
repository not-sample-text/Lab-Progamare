#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100], i = 0, len;

    printf("Baga numere (0 = stop)");

    while(1)
    {
        printf("\nbaga nr. %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0) break;
        i++;
    }

    len = i;

    i = 0;
    printf("\nnumere div cu 3: ");
    while(i < len){
        if(n[i]%3==0) printf("%d, ", n[i]);
        i++;
    }

    return 0;
}
