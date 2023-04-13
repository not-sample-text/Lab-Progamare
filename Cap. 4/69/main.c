#include <stdio.h>
#include <string.h>

int longestCommonSubstring(char *string1, char *string2) {
    int n = strlen(string1);
    int m = strlen(string2);
    int lcs[n + 1][m + 1];
    int i, j, maxLen = 0;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                lcs[i][j] = 0;
            } else if (string1[i - 1] == string2[j - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
                if (lcs[i][j] > maxLen) {
                    maxLen = lcs[i][j];
                }
            } else {
                lcs[i][j] = 0;
            }
        }
    }

    return maxLen;
}

int main() {
    char string1[100], string2[100];
    printf("Introdu primul sir: ");
    fgets(string1, 100, stdin);
    printf("Introdu al doilea sir: ");
    fgets(string2, 100, stdin);
    string1[strcspn(string1, "\n")] = 0;
    string2[strcspn(string2, "\n")] = 0;
    int lcs = longestCommonSubstring(string1, string2);
    printf("Lungimea celui mai lung subșir comun este: %d", lcs);
    return 0;
}
