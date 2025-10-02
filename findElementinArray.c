/******************************************************************************
WAPC to do the following:
1. Initialize an integer array of 5 elements
2. Accept an integer from the user
3. Display whether or not the element entered by the user is present in the array
Assume all elements in the array are unique
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, searchElement, flag = 0;
    // 1. Initialize an integer array of 5 elements
    int arr[] = {5, 12, 1, 0, -6};

    // 2. Accept an integer from the user
    printf("\nEnter an integer: ");
    scanf("%d", &searchElement);

    for (i = 0; i < 5; ++i)
    {
        if (searchElement == arr[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\nThe element is not present in the array");
    }
    else
    {
        printf("\nThe element is present in the array at index %d", i);
    }

    return 0;
}
