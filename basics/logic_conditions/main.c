#include <stdio.h>

int main (void) {

    // Declare variables
    int team_size;
    int team_one_weight = 0;
    int team_two_weight = 0;

    // Get the team size
    scanf("%d", &team_size);


    // Get the weight of each team member for each team
    for (int i = 0; i < team_size; i++) {
        int weight_one;
        scanf("%d", &weight_one);
        team_one_weight += weight_one;

        int weight_two;
        scanf("%d", &weight_two);
        team_two_weight += weight_two;
    }

    // Compare the weight of the teams
    if (team_one_weight > team_two_weight) {
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }

    // Print the total weight of each team
    printf("Total weight for team 1: %d\n", team_one_weight);
    printf("Total weight for team 2: %d\n", team_two_weight);

}