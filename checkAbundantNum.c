/*******************************************************************************************
 WAPC to input a positive integer. Check whether the number is abundant or not.
 Abundant Number – A number for which the sum of proper divisors is greater than the number.
  Example: 12 → 1+2+3+4+6=16 > 12
********************************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int s = 0;

    printf("Enter the number to check: \n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            s = s + i;
        }
    }
    if (s > n)
    {
        printf("%d is greater than  %d \n", s, n);
        printf("%d is an Abundant Number \n", n);
    }
    else
    {
        printf("%d is lesser than  %d \n", s, n);
        printf("%d is NOT an Abundant Number \n", n);
    }

    return 0;
}