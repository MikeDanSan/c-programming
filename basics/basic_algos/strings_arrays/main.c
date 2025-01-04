#include <stdio.h>

int main(void) {

    int number = 0;
    char word[101]; // array of characters (string) with space for 100 characters + null terminator

    // %s is a format specifier used in functions like printf and scanf to indicate that the corresponding argument is a string.

    // Read the number and the word, with error checking
    // %100s ensures that only 100 characters are read, leaving space for the null terminator
    if (scanf("%d %100s", &number, word) != 2) {
        printf("Invalid input. Please enter a number followed by a word.\n");
        return 1;
    }
    
    // print the arrary of characters (string) the number of times specified by the integer
    for (int i = 0; i < number; i++) {
        printf("%s\n", word);
    }

    return 0;
}