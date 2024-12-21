#include <stdio.h>

int main(void) {

    int i = 0;
    int array[10]; // Declare an array of 10 integers.
    int readValue = 0;
    int cellNumber = 0;
    int quantity = 0;


    for(i = 0; i < 10; i++) {
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        cellNumber = cellNumber + 1;
    }

    scanf("%d", &quantity);
    printf("%d\n", array[quantity]);

    return 0;
}