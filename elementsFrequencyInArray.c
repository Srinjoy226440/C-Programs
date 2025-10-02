/************************************************************************************************
WAPC to input an integer array from the user. Display the frequency of every element in the array
*************************************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n]; // to mark visited elements

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0; // initially mark all as not visited
    }

    printf("\nElement Frequency\n");
    for (i = 0; i < n; i++)
    {
        if (visited[i] == 1) // already counted, skip
            continue;

        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1; // mark as visited
            }
        }
        printf("%d --> %d\n", arr[i], count);
    }

    return 0;
}
