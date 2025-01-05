#include <stdio.h>
#include <string.h>

int main(void) {
    char word[51]; // Assuming the word does not have more than 50 letters
    scanf("%50s", word); // Read a word from the user

    int length = strlen(word);
    int half_length = (length + 1) / 2; // Include the middle letter if there is one
    int found_in_first_half = 0;
    int found_in_second_half = 0;

    for (int i = 0; i < length; i++) {
        if (i < half_length && (word[i] == 't' || word[i] == 'T')) {
            found_in_first_half = 1;
        } else if (i >= half_length && (word[i] == 't' || word[i] == 'T')) {
            found_in_second_half = 1;
        }
    }

    if (found_in_first_half) {
        printf("1\n");
    } else if (found_in_second_half) {
        printf("2\n");
    } else {
        printf("-1\n");
    }

    return 0;
}