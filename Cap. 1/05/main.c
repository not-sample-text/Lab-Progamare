#include <stdio.h>

void decimalToBinary(int num)
{

    if (num == 0)
    {
        printf("0");
        return;
    }

    int binaryNum[32];
    int i=0;

    while (num > 0)
    {
        binaryNum[i++] = num % 2;
        num /= 2;
    }

    for (int j = i-1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

void decimalToOctal(int num)
{
    printf("\n%o\n", num);
    return 0;
}

void decimalToHex(int num)
{
    printf("%x\n", num);
    return 0;
}

int main()
{
    int num = 15;

    decimalToBinary(num);
    decimalToOctal(num);
    decimalToHex(num);

    return 0;
}
