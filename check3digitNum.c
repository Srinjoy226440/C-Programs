/***********************************************************
WAPC to check if a number is of 3-digits and divisible by 3.
************************************************************/

#include <stdio.h>
int main()
{
    int n;
    int flag1 = 0, flag2 = 0;

    printf("Enter the number to check: ");
    scanf("%d", &n);

    if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999))
    {
        flag1 = 1;
    }
    if ((n % 3) == 0)
    {
        flag2 = 1;
    }

    if ((flag1 == 1) && (flag2 == 1))
    {
        printf("%d is a 3-digit number divisible by 3", n);
    }
    else if ((flag1 == 1) && (flag2 == 0))
    {
        printf("%d is a 3-digit number, but NOT divisible by 3", n);
    }
    else if ((flag1 == 0) && (flag2 == 1))
    {
        printf("%d is NOT a 3-digit number, but divisible by 3", n);
    }
    else
    {
        printf("%d is NEITHER a 3-digit number, NOR divisible by 3", n);
    }
    return 0;
}
