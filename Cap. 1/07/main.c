#include <stdio.h>
int main()
{
    int n, rev = 0, rest, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        rest = n % 10;
        rev = rev * 10 + rest;
        n /= 10;
    }

    if (original == rev)
        printf("%d palindrom.", original);
    else
        printf("%d nu palindrom.", original);

    return 0;
}
