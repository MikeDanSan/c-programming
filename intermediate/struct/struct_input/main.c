#include <stdio.h>
struct point{
    int x;
    int y;
};

void readPoint(struct point * p);
void printPoint(struct point pt);
void printTriangle(struct point * ptr);

int main(void) {

    struct point triangle[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter point %d:\n", i + 1);
        readPoint(&triangle[i]);
    }

    printTriangle(triangle);

	return 0;
}

void readPoint(struct point * p) {
    printf("Enter x: ");
    scanf("%d", &p->x);
    printf("Enter y: ");
    scanf("%d", &p->y);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printTriangle(struct point * ptr) {
    for (int i = 0; i < 3; i++) {
        printPoint(ptr[i]);
    }
}