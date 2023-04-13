#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    char sentence[1000];
    int i, freq[ALPHABET_SIZE] = {0};

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    for(i = 0; sentence[i] != '\0'; i++) {
        if(isalpha(sentence[i])) {
            freq[tolower(sentence[i]) - 'a']++;
        }
    }

    for(i = 0; i < ALPHABET_SIZE; i++) {
        if(freq[i] == 0) {
            printf("The sentence is not a pangram.\n");
            return 0;
        }
    }

    printf("The sentence is a pangram.\n");
    return 0;
}
