/******************************************************************************
WAPC to input a year. Check and display if it is a leap year or not.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("\nEnter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("\n%d is a leap year", year);
        }
        else
        {
            printf("\n%d is not a leap year", year);
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("\n%d is a leap year", year);
        }
        else
        {
            printf("\n%d is not a leap year", year);
        }
    }

    return 0;
}
