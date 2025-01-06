#include <stdio.h>

int min(int a, int b);

int main(void)
{

    int smallest;
    int sizeOfArray;

    scanf("%d", &sizeOfArray);

    // loop to get the elements of the array
    int array[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &array[i]);
    }

    // loop to get the smallest element of the array
    smallest = array[0];
    for (int i = 1; i < sizeOfArray; i++)
    {
        smallest = min(smallest, array[i]);
    }

    printf("%d\n", smallest);

    return 0;
}

int min(int a, int b)
{
    return a < b ? a : b;
}