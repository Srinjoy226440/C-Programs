/*****************************************************************************************************
 WAPC to input an integer array from the user. Remove all duplicates and display the resultant array.
******************************************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce size
                j--; // stay at same index to check new shifted element
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
