/****************************************************************
 WAPC to check and print if a number is divisible by both 3 and 5.
 ****************************************************************/

#include <stdio.h>
int main()
{
    int n;
    int flag1 = 0, flag2 = 0;
    printf(" Enter the number to check: \n");
    scanf("%d", &n);

    if ((n % 3) == 0)
    {
        flag1 = 1;
    }
    if ((n % 5) == 0)
    {
        flag2 = 1;
    }

    if ((flag1 == 1) && (flag2 == 1))
    {
        printf("%d is divisible by both 3 and 5 \n", n);
    }
    else if ((flag1 == 1) && (flag2 == 0))
    {
        printf("%d is only divisible by 3, not 5 \n", n);
    }
    else if ((flag1 == 0) && (flag2 == 1))
    {
        printf("%d is only divisible by 5, not 3 \n", n);
    }
    else
    {
        printf("%d is neither divisible 3, nor 5 \n", n);
    }

    return 0;
}