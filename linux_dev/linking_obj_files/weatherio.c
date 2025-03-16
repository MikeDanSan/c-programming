#include <stdio.h>

void printTemp(double *temps, int numOfTemps) {
    printf("Weather Data:\n");
    printf("Number of temperatures: %d\n", numOfTemps);
    printf("Temperatures:\n");
    for (int i = 0; i < numOfTemps; i++) {
        printf("Temperature %d: %.2f\n", i + 1, temps[i]);
    }
}