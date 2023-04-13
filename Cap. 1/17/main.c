#include <stdio.h>

int main()
{
    int n, prev = 0, curr = 1, next;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The first %d Fibonacci numbers are:\n", n);
    printf("%d ", prev);
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", curr);
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("\n");

    return 0;
}
