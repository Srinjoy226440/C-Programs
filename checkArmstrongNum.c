/***********************************************************************************
WAPC to input a positive integer. Assume that the number is of 3 digits.
 Check and print if the number is Armstrong or not.
 Note: An Armstrong number is a number that is equal to the sum of its own digits
 each raised to the power of the number of digits, for example, 153 = 1³ + 5³ + 3³
 ***********************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, s = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int num = n;

    while (num != 0)
    {
        int d = num % 10;
        int t = (int)(pow(d, 3.0));
        s += t;
        num /= 10;
    }
    if (s == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is NOT an Armstrong number", n);

    return 0;
}