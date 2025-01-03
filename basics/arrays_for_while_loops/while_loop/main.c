#include <stdio.h>

int main(void){

    int expense = 0;
    int totalExpense = 0;

    while (1) {
        if (scanf("%d", &expense) != 1) {
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        if (expense == -1) {
            break;
        }

        totalExpense += expense;
    }

    printf("%d\n", totalExpense);

    return 0;
}