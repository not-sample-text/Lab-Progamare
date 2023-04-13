#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++)
    {
        if(i%2==0)
            printf("%d, ", i);
    }
    return 0;
}
