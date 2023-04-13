#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n[100] = {0}, i, len;

    printf("baga array ( 0 = stop )\n");

    for(i = 0; i < 100; i++){
        printf("baga nr. %d: ", i+1);
        scanf("%d", &n[i]);

        if(n[i]==0) break;
    }

    len = i;

    printf("Numerele prime din array: ");

    for(i = 0; i < len; i++){
        if(is_prime(n[i])){
            printf("%d ", n[i]);
        }
    }
    return 0;
}
