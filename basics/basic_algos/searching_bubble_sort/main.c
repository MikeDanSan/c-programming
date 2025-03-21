#include<stdio.h>

int main(void) {

    // Sorting from smallest to largest
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5};
    int n = 10;
    int i, j;
    int swap;

    printf("Unsorted list: \n");
    for (i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    // Bubble sort
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
        
            if (list[i] > list[i+1]) {

                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }

        }

    }

    // output sorted list
    printf("Sorted list: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    
    return 0;

}
