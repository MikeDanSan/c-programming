#include <stdio.h>

int main (void) {
    
    char a[4];
    char b[6];
    char c[9];
    
    char * words[3] = {a, b, c};

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    printf("%s %s %s.\n", words[0], words[1], words[2]);
    
    return 0;
}