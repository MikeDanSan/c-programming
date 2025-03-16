#include <stdio.h>

int main(void) {
    
    int checkGrade, lastgrade, grade;
    char filename[] = "myGrades.txt";

    lastgrade = 0;

    FILE *ofile;
    ofile = fopen(filename, "r");
    

    // take user input as int variable
    scanf("%d", &checkGrade);

    // get number of grades in file
    while(fscanf(ofile, "%d", &grade) != EOF) {
        lastgrade = grade;
    }

    fclose(ofile);

    if (checkGrade != lastgrade) {
 
        // append new grade to file
        ofile = fopen(filename, "a");
        // append to file
        fprintf(ofile, " %d ", checkGrade);
        fclose(ofile);
    }

    ofile = fopen(filename, "r");
    while(fscanf(ofile, "%d", &grade) != EOF) {
        printf("%d ", grade);
    }
    
    fclose(ofile);

    return 0;
}