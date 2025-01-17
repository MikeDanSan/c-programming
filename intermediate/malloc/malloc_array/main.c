#include <stdio.h>
#include <stdlib.h>

int *allocateIntArray(int);
double findAverage(int *, int);

int main(void) {

    int num, i;
    int *array;

    double average;
    printf("How many grades will you like to enter?\n");
    scanf("%d", &num);
    
    array = allocateIntArray(num);

    printf("Enter %d grades:\n ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    average = findAverage(array, num);

    printf("The average of the grades is %.2f\n", average);

    free(array);

    return 0;
}


int *allocateIntArray(int num) {
    int *ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}

double findAverage(int *array, int num) {
    int i;
    double sum = 0;
    for (i = 0; i < num; i++) {
        sum += array[i];
    }
    return sum / num;
}