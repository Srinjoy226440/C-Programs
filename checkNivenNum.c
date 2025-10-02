/**********************************************************************
 WAPC to input a positive integer. Check whether it is Niven or not.
 Note: Niven number – A number divisible by the sum of its digits.
 Example: 18 ÷ (1+8) = 2
***********************************************************************/

#include <stdio.h>

int main()
{
    int n, num;
    int s = 0;

    printf("Enter the number to check: \n");
    scanf("%d", &n);
    num = n;

    while (num != 0)
    {
        int d = num % 10;
        s = s + d;
        num /= 10;
    }

    if ((n % s) == 0)
    {
        printf("%d is a Niven number", n);
    }
    else
    {
        printf("%d is NOT a Niven number", n);
    }
    return 0;
}