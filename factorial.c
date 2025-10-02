/********************************************************************************************
WAPC to input a positive integer from the user. Find and display the factorial of the number.
*********************************************************************************************/
#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d", n, fact);
    return 0;
}
