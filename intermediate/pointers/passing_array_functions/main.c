#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int * array, int size) {

    int result;

    // find largest int in array
    int largest = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // subtract largest int from all ints in array output the result with newline
    for (int i = 0; i < size; i++) {
        result = largest - array[i];
        array[i] = result;
    }

}

