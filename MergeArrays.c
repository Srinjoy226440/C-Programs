/*********************************************************************************************************
 WAPC to input two sorted integer arrays from the user. Merge these two arrays into a single sorted array.
**********************************************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], arr[n1 + n2];

    printf("Enter elements of array 1 (sorted): \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2 (sorted): \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge process
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n2)
    {
        arr[k++] = arr2[j++];
    }

    printf("Merged Sorted Array: ");
    for (int x = 0; x < n1 + n2; x++)
    {
        printf("%d ", arr[x]);
    }
    printf("\n");

    return 0;
}
