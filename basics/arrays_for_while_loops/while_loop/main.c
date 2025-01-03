#include <stdio.h>

int main(void) {
    int population;
    int days = 0;
    int infected = 1;

    // Read the total population
    scanf("%d", &population);

    // Each day each infected person infects 2 more people, except for the first day
    while (infected < population) {
        if (days != 0) {
            infected = infected * 3; // Each infected person infects 2 more people
        }
        days++;
    }

    // Output the number of days it takes to infect the entire population
    printf("%d\n", days);

    return 0;
}