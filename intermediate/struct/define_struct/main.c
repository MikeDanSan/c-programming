#include <stdio.h>

struct student {
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(void) {
    struct student me = {"John", "Doe", 2000, 8.5};
    struct student you = {"Remi", "Row", 2001, 9.0};

    printf("Name: %s %s, %s %s\n", me.firstName, me.lastName, you.firstName, you.lastName);
    printf("Birth year: %d\n", me.birthYear);
    printf("Average grade: %.2f\n", me.aveGrade);

    return 0;
}