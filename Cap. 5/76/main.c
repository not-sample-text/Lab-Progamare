#include <stdio.h>

int main()
{
    int latura, i, j;

    printf("Introduceti lungimea laturii triunghiului dreptunghic: ");
    scanf("%d", &latura);

    for (i = 1; i <= latura; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
