#include <stdio.h>

void reverseArray(int *);

int main() {
    // populate an 6 element array from input
    int arr[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    // call reverseArray function
    reverseArray(arr);

    // print the reversed array
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
}

void reverseArray(int * arr) {
    // reverse the array
    for (int i = 0; i < 3; i++) {
        int temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
    
}