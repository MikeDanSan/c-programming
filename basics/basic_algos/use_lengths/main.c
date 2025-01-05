#include <stdio.h>

int main(void) {

    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    int longestWord = 0;
    char word[101];
    int length[20];

    // Initialize the length array
    for(i = 0; i < 20; i++){
        length[i] = 0;
    }

    // Get the number of words
    scanf("%d", &nbWords);

    // Get the words
    for(t = 0; t < nbWords; t++){

        // Get the word
        scanf("%s", word);

        // Get the length of the word
        l = 0;
        while(word[l] != '\0'){
            l++;
        }

        // Increment the length counter
        length[l]++;

    }

    // loop through the length array
    for(j = 0; j < 20; j++){
        // output the length of the longest word
        if(length[j] > 0){
            longestWord = j;
        }
    }

    printf("%d\n", longestWord);

    return 0;
}