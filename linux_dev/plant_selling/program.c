#include <stdio.h>
#include <stdlib.h> // for atoi and atof

int main(int argc, char * argv[]) {
    
    int numPlants;
    double cost, totalCost;

    if(argc == 3) {

        numPlants = atoi(argv[1]);
        cost = atof(argv[2]);
        totalCost = numPlants * cost;

        printf("%d plants for %.2lf dollars each cost %.2lf dollars. \n", numPlants, cost, totalCost);

    } else {

        printf("Invalid input.\n");
    
    }

    return 0;
    
}