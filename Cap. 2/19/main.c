#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{

    int n[MAX_LENGTH] = {0}, i, len;
    printf("Baga numere (0 sa te opresti)\n");

    for(i = 0; i < MAX_LENGTH; i++){
        printf("Baga nr. %d: ", i+1);
        scanf("%d", &n[i]);

        if(n[i] == 0) break;
    }

    len = i;

    printf("Array inv: ");

    for(i = len - 1; i >= 0; i--){
        printf("%d, ", n[i]);
    }
    return 0;
}
