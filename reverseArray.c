/******************************************************************************
WAPC to do the following:
1. Declare an integer array of 5 elements
2. Fill the array with user inputs
3. Display the original array
4. Reverse the array
5. Display the reversed array
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, left, right, temp;
    // 1. Declare an integer array of 5 elements
    int arr[5];

    // 2. Fill the array with user inputs
    for (i = 0; i < 5; ++i)
    {
        printf("\nEnter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Display the original array
    printf("\nOriginal array is as follows: ");
    for (i = 0; i < 5; ++i)
    {
        printf("arr[%d] = %d\t", i, arr[i]);
    }

    // 4. Reverse the array
    left = 0;  // referring to the first element of the array
    right = 4; // referring to the last element of the array

    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        ++left;
        --right;
    }

    // 5. Display the reversed array
    printf("\nReversed array is as follows: ");
    for (i = 0; i < 5; ++i)
    {
        printf("arr[%d] = %d\t", i, arr[i]);
    }

    return 0;
}
