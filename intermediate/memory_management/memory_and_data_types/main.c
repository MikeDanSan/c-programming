#include <stdio.h>

int main() {
    char type;
    int num;
    size_t size = 0;

    if (scanf(" %c", &type) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (type) {
        case 'i':
            size = sizeof(int);
            break;
        case 's':
            size = sizeof(short);
            break;
        case 'c':
            size = sizeof(char);
            break;
        case 'd':
            size = sizeof(double);
            break;
        default:
            printf("Invalid variable type\n");
            return 1;
    }

    size_t total_size = size * num;
    size_t mb = total_size / 1000000;
    size_t kb = (total_size % 1000000) / 1000;
    size_t b = total_size % 1000;

    if (mb > 0) {
        printf("%zu MB and %zu KB and %zu B\n", mb, kb, b);
    } else if (kb > 0) {
        printf("%zu KB and %zu B\n", kb, b);
    } else {
        printf("%zu B\n", b);
    }

    return 0;
}