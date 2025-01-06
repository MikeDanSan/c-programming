#include <stdio.h>
#include <string.h>

// Function to sort the characters of a string
void sort_string(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char word[51]; // Assuming the word has no more than 50 letters
    scanf("%50s", word);

    sort_string(word);

    int count = 0;
    size_t len = strlen(word);
    for (size_t i = 0; i < len - 1; i++) {
        if (word[i] == word[i + 1]) {
            count++;
            while (i < len - 1 && word[i] == word[i + 1]) {
                i++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}