#include <stdio.h>

#define PADDING_CHAR '+'

int main() {
    char ch = '\0';
    scanf("%c", &ch);

    int n = 5; // Number of rows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("%c", PADDING_CHAR);
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", ch);
        }
        for (int j = 0; j < n - i - 1; j++) {
            printf("%c", PADDING_CHAR);
        }
        printf("\n");
    }

    return 0;
}