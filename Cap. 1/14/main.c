#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit, sum = 0, num_digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0)
    {
        num_digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
