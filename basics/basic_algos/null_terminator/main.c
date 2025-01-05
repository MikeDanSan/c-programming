#include <stdio.h>

int main(void) {

    int numNames = 0;

    scanf("%d", &numNames);

    // loop through the number of names
    for (int i = 0; i < numNames; i++) {

        char firstName[101];
        char lastName[101];
        
        scanf("%s %s", firstName, lastName);

        // print last name then first name
        printf("%s %s\n", lastName, firstName);
    }

    return 0;
}