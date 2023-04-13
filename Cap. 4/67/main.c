#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char str[1000];
    int freq[ASCII_SIZE] = {0};
    int max_freq = 0, max_index = 0;

    printf("Introduceti un sir de caractere: ");
    fgets(str, 1000, stdin);

    for (int i = 0; i < strlen(str); i++) {
        freq[(int)str[i]]++;
    }

    for (int i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_index = i;
        }
    }

    printf("Cel mai frecvent caracter este '%c', apare de %d ori.\n", (char)max_index, max_freq);

    return 0;
}
