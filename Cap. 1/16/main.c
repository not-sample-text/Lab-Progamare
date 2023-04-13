#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    for (int i = 2; i <= input; i++)
    {
        if (is_prime(i))
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
