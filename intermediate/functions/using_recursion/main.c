#include <stdio.h>

int sumOfDigits(int n);

int main(void) {
    int n, sum;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    sum = sumOfDigits(n);
    printf("The sum of the digits of %d is %d.\n", n, sum);
    return 0;
}

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}