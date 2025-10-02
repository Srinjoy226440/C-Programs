/***********************************************************************
WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms.
Here, ‘n’ is user input.
************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (double i = 0.0; i <= (double)n; i++)
    {
        printf("%.0lf \t", pow(2.0, i));
    }
    return 0;
}