#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int num1, num2;
    printf("baga 2 numere: ");
    scanf("%d %d", &num1, &num2);

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    printf("Cel mai mare divizor comun al %d si %d ii %d\n", num1, num2, gcdResult);
    printf("Cel mai mic multiplu comun al %d si %d ii %d\n", num1, num2, lcmResult);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{
    int max, step, lcmResult;
    if (a > b)
    {
        max = step = a;
    }
    else
    {
        max = step = b;
    }

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcmResult = max;
            break;
        }
        max += step;
    }

    return lcmResult;
}
