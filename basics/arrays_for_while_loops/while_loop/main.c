#include <stdio.h>

int main(void) {
    int minTemp, maxTemp, currentTemp;

    // Read the minimum and maximum safe temperatures
    scanf("%d %d", &minTemp, &maxTemp);

    while (1) {
        // Read the current temperature
        scanf("%d", &currentTemp);

        // Check if the temperature reading is done
        if (currentTemp == -999) {
            break;
        }

        // Check if the current temperature is within the safe range
        if (currentTemp >= minTemp && currentTemp <= maxTemp) {
            printf("Nothing to report\n");
        } else {
            printf("Alert!\n");
            break;
        }
    }

    return 0;
}