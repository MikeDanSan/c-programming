#include <stdio.h>

// Write your function prototype here
void elixirEffect(int *ageAddr);

int main(void){
    int age;
    int *ageAddr = &age;
    scanf("%d", ageAddr);
    printf("Your current age is %d.\n", age);

    // Write your function call here
    elixirEffect(ageAddr);

    printf("Your new age will be %d!\n", age);
    return 0;
}

// Write your function here
void elixirEffect(int *ageAddr) {
    if (*ageAddr >= 21) {
        *ageAddr -= 10;
    } else {
        *ageAddr *= 2;
    }
}