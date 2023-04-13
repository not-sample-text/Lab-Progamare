#include <stdio.h>
#include <string.h>

int main()
{
    int num1, num2, count = 0;
    char num1_str[11], num2_str[11];
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sprintf(num1_str, "%d", num1);
    sprintf(num2_str, "%d", num2);

    for (int i = 0; i <= strlen(num2_str) - strlen(num1_str); i++)
    {
        int match = 1;
        for (int j = 0; j < strlen(num1_str); j++)
        {
            if (num1_str[j] != num2_str[i+j])
            {
                match = 0;
                break;
            }
        }
        if (match == 1)
        {
            count++;
        }
    }

    printf("%d occurs %d times in %d.\n", num1, count, num2);
    return 0;
}
