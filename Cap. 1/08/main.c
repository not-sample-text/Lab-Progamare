#include <stdio.h>
int main ()
{
    int i, n;
    printf("baga numar intreg: ");
    scanf("%d", &n);
    printf("\ndivizorii lui %d \n",n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
