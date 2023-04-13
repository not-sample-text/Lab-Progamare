#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Perfect numbers up to %d are:\n", num);
    for (int i = 1; i <= num; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
