#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, num = 0;
    printf("baga numar intreg: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            num++;
        }
    }

    printf("numarul de divizori al numarului %d este %d", n, num);
    return 0;
}
