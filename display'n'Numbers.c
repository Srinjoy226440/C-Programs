/*****************************************************************************
 WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
******************************************************************************/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }
    return 0;
}
