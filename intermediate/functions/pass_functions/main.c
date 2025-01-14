#include <stdio.h>

// Function prototype
int sum(int, int);

int main(void) {
    
    int a,b;
    int result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("You entered: %d and %d\n", a, b);

    result = sum(a, b);
    printf("The result is %d\n", result);

    return 0;
}

// Function definition
int sum(int x, int y) {
    int compute;
    compute = x + y;
    printf("The sum of %d and %d is %d\n", x, y, compute);

    return compute;
}