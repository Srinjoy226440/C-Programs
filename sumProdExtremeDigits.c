/***************************************************************************************************
 WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.
 ***************************************************************************************************/

#include <stdio.h>
int main()
{
    int number, leftmostDigit, rightmostDigit;
    printf("\nEnter a 4-digit number: ");
    scanf("%d", &number);
    rightmostDigit = number % 10;
    leftmostDigit = number / 1000;
    printf("\nProduct of the leftmost and rightmost digits is %d", leftmostDigit * rightmostDigit);
    printf("\nSum of the leftmost and rightmost digits is %d", leftmostDigit + rightmostDigit);
    return 0;
}
