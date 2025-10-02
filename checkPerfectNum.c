/**************************************************************************************
WAPC to input a positive integer. Check and print if the number is perfect or not.
Note: Perfect number is a number which is equal to the sum of all its proper divisors
(excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14
***************************************************************************************/
#include <stdio.h>
int main()
{
    int n, s = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            s += i;
        }
    }
    if (s == n)
        printf("%d is a Perfect number", n);
    else
        printf("%d is NOT a Perfect number", n);
    return 0;
}