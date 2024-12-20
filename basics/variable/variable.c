#include <stdio.h>

int main(void) {

    int numRobots;
    int height;
    int weight;
    int enginePower;
    int resistance;
    int powerScore = 0;

    scanf("%d", &numRobots);

    for(int i = 0; i < numRobots; i++) {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        powerScore += (enginePower + resistance) * (weight - height);
    }

    printf("%d\n", powerScore);

    return 0;
}