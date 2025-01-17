#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *a, *b;
    float *c;
    a = (int *) malloc(sizeof(int));
    *a = 1;
    b = (int *) malloc(sizeof(int));
    *b = 2;
    c = (float *) malloc(sizeof(float));
    *c = 3.5;

    printf("location for a: %p, b: %p, c: %p\n", a, b, c);
    free(a);
    free(b);
    free(c);
    return 0;
}