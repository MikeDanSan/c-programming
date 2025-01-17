#include <stdio.h>
int main(void){

    char words[3][10];
    int i;
    printf("Please enter three words: ");
    for (i=0; i<3; i++) {
        scanf("%s", words[i]);
    }
    printf("You entered: \n");
    for (i=0; i<3; i++) {
        printf("%s ", words[i]);
    }
    return 0;
}