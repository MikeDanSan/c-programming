#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *dateptr){

    scanf("%d", &dateptr->year);
    scanf("%d", &dateptr->month);
    scanf("%d", &dateptr->day);

}

void printDate(struct date dateptr){

    // make day and month two digits and year four digits
    printf("%02d/%02d/%04d\n", dateptr.month, dateptr.day, dateptr.year);
}
