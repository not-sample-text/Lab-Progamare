#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char str[1000];
    bool freq[26] = {false};
    int i, index;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            freq[index] = true;
        }
    }

    bool is_pangram = true;
    for(i = 0; i < 26; i++) {
        if(freq[i] == false) {
            is_pangram = false;
            break;
        }
    }

    if(is_pangram) {
        printf("The string is a perfect pangram.\n");
    } else {
        printf("The string is not a perfect pangram.\n");
    }

    return 0;
}
