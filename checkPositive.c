/******************************************************************************
WAPC to input two numbers. Check if either of the two inputs is positive.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int number1, number2;
    printf("\nEnter two integers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 > 0 || number2 > 0)
    {
        printf("\nOne or more inputs is positive");
    }
    else
    {
        printf("\nNone of the inputs is positive");
    }
    return 0;
}
