/***********************************************************************************
WAPC to input an integer. Calculate and display the square and cube of the number.
************************************************************************************/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sq = n * n;
    int cube = n * n * n;
    printf("Square of the number %d is: %d \n", n, sq);
    printf("Cube of the number %d is: %d \n", n, cube);
    return 0;
}