#include <stdio.h>

int main() {
    int n[100], i = 0, max = 0, digit_count = 0;

    printf("Introduceti numere (0 = oprire)\n");
    while (1) {
        printf("Introduceti numarul: ");
        scanf("%d", &n[i]);
        if (n[i] == 0) {
            break;
        }
        if (n[i] > max) {
            max = n[i];
        }
        i++;
        if (i >= 100) {
            break;
        }
    }

    while (max != 0) {
        digit_count++;
        max /= 10;
    }

    printf("Numarul maxim introdus are %d cifre\n", digit_count);

    return 0;
}
