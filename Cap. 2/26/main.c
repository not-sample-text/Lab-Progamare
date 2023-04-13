#include <stdio.h>

int main() {
    int n, i, fib[100];

    printf("Introduceti lungimea sirului Fibonacci: ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Elementele de pe pozitiile pare sunt: ");
    for (i = 2; i < n; i += 2) {
        printf("%d ", fib[i]);
    }

    return 0;
}
