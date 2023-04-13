#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++) {
        if (str[i] != str[len-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Introduceti un sir de caractere: ");
    fgets(str, sizeof(str), stdin);
    printf("Subsirurile palindrom din %s sunt:\n", str);
    int i, j, len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i+1; j <= len; j++) {
            char sub[100];
            strncpy(sub, str+i, j-i);
            sub[j-i] = '\0';
            if (is_palindrome(sub) && strlen(sub) > 1) {
                printf("%s\n", sub);
            }
        }
    }
    return 0;
}
