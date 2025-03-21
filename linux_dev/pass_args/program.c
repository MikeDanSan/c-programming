#include <stdio.h>
#include <stdlib.h> // for atoi and atof
#include <string.h> // for strcmp

int main(int argc, char * argv[]) {
    
    int i, compare, wholeNumber;
    double decimalNumber;

    printf("Number of arguments: %d\n", argc);
    
    for(i = 0; i<argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }


    if(argc == 4) {
        compare = strcmp(argv[1], "-e");
        if(compare == 0) {
            printf("argv[1] equals -e \n");
        } else {
            printf("argv[1] does not equal -e \n");
        }

        wholeNumber = atoi(argv[2]);
        printf("%s as an integer is %d. \n", argv[2], wholeNumber);
        decimalNumber = atof(argv[3]);
        printf("%s as a double is %lf. \n", argv[3], decimalNumber);
    }

    return 0;
    
}