/*********************************************************
 WAPC to input an array of ‘n’ elements from the user.
Find and display the second highest element of the array.
**********************************************************/
#include <stdio.h>
#include <limits.h> // for INT_MIN

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first; // update second before first
            first = arr[i]; // new largest
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i]; // update second largest
        }
    }

    if (second == INT_MIN)
    {
        printf("No second largest element (all elements may be equal).\n");
    }
    else
    {
        printf("Second largest element is %d\n", second);
    }

    return 0;
}
