/******************************************************************************
WAPC to input a number. If it is positive, check if the number is odd or even.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        if (number % 2 == 0)
        {
            printf("\n%d is an even number", number);
        }
        else
        {
            printf("\n%d is an odd number", number);
        }
    }
    else
    {
        printf("\n%d is not positive", number);
    }
    return 0;
}
