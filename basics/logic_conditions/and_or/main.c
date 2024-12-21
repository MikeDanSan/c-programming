#include <stdio.h>

int main() {
    int age;
    int luggageWeight;
    int price;

    // Read customer's age
    scanf("%d", &age);

    // Read weight of luggage
    scanf("%d", &luggageWeight);

    // Determine the price
    if (age == 60) {
        price = 0;
    } else if (age < 10) {
        price = 5;
    } else {
        price = 30;
        if (luggageWeight > 20) {
            price += 10;
        }
    }

    // Output the price
    printf("%d \n", price);

    return 0;
}