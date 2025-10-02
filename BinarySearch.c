/***********************************************************************************************
WAPC to initialize the array with 10 integers of your choice.
Input an integer from the user.
Check and display whether or not the input entered by the user is present in the array or not.
Use the binary search technique (Hint: Make sure the array elements are sorted).
************************************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10] = {2, 5, 9, 14, 23, 37, 45, 59, 72, 88}; // sorted array
    int n = 10;
    int key, low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter an integer to search: ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found)
    {
        printf("Element %d found at index %d (position %d in array).\n", key, mid, mid + 1);
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
