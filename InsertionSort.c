/*******************************************************************
WAPC to input an integer array from the user.
Sort the array in descending order using insertion sort technique
********************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort (Descending Order)
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements that are smaller than key to one position ahead
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("\nArray after sorting in descending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
