#include <stdio.h>
int main() {

    int arr[3] = {15, 16, 17};
    
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    int * ptr = arr;

    // pointer arithmetic
    * ptr = 2;
    * (ptr + 1) = 3;
    * (ptr + 2) = 4;
    
    // print the array
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}