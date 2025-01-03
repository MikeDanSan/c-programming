#include <stdio.h>

int main(void){

    int num = 0;
    int length = 0;
    int levels = 0;

    scanf("%d", &num);

    for (length = 0; length<num; length++){
        for(levels = 0; levels<num; levels++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}