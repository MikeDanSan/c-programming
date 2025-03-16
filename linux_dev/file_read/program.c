#include <stdio.h>

int main(void) {
    double myAverage, classAverage;
    int classNumber = 1;
    int betterClassNumber = 0;

    FILE *fp = fopen("gradeComparison.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the first average which is your class's average
    if (fscanf(fp, "%lf", &myAverage) != 1) {
        printf("Error reading file.\n");
        fclose(fp);
        return 1;
    }

    // Read the rest of the averages and compare
    while (fscanf(fp, "%lf", &classAverage) != EOF) {
        classNumber++;
        if (classAverage > myAverage) {
            betterClassNumber = classNumber;
            break;
        }
    }

    fclose(fp);

    if (betterClassNumber == 0) {
        printf("Yes\n");
    } else {
        printf("No %d\n", betterClassNumber);
    }

    return 0;
}