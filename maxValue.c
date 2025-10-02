/***********************************************************
 WAPC to input three unique integers. Find the maximum value.
 ***********************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("\nEnter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\n%d is maximum", num1);
    }
    else if (num2 > num3 && num2 > num1)
    {
        printf("\n%d is maximum", num2);
    }
    else
    {
        printf("\n%d is maximum", num3);
    }

    return 0;
}
