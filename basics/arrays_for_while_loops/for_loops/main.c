#include <stdio.h>
#include <stdlib.h>

#define MAX_CARS 50


int main(void) {

    // number of cars is the size of the array
    int numberCars;

    // Read the number of cars
    if (scanf("%d", &numberCars) != 1 || numberCars < 1 || numberCars > MAX_CARS) {
        fprintf(stderr, "Invalid number of cars. Please enter a number between 1 and %d.\n", MAX_CARS);
        return 1;
    }

    // Allocate memory for car weights
    double *carWeight = (double *)malloc(numberCars * sizeof(double));
    if (carWeight == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Populate the array with car weights
    for (int i = 0; i < numberCars; i++) {
        if (scanf("%lf", &carWeight[i]) != 1) {
            fprintf(stderr, "Invalid input for car weight.\n");
            free(carWeight);
            return 1;
        }
    }

    // Calculate the total weight and average weight
    double totalWeight = 0;
    for (int i = 0; i < numberCars; i++) {
        totalWeight += carWeight[i];
    }
    double averageWeight = totalWeight / numberCars;

    // Calculate and print the weight to move for each car
    for (int i = 0; i < numberCars; i++) {
        double weightToMove = carWeight[i] - averageWeight;
        if (weightToMove < 0) {
            printf("%.1lf\n", -weightToMove);
        } else {
            printf("-%.1lf\n", weightToMove);
        }
    }

    // Free allocated memory
    free(carWeight);
    
    return 0;
}