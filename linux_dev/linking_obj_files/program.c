#include <stdio.h>
#include "weather.h"

int main(void) {
	double temperatures[7] = {6.9, 12.3, 9.0, 5.3, 9.8, 1.8, 0.3};
	double average = averageTemp(temperatures, 7);
	double max = maxTemp(temperatures, 7);
	printTemp(temperatures, 7);
	printf("Average 7-day temp: %.2lf\n", average);
	printf("Highest temp: %.2lf\n", max);
	printf("Lowest tempature: %.2lf\n", minTemp(temperatures, 7));
	return 0;
}