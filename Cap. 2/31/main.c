#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100], i = 0, len, par = 0, imp = 0;

    printf("Baga numere (0 = stop)");

    while(1)
    {
        printf("\nbaga nr. %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0) break;
        else if(n[i]%2==0) par++;
        else imp++;
        i++;
    }

    printf("\nNum par: %d", par);
    printf("\nNum imp: %d", imp);
    return 0;
}
