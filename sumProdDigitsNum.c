/****************************************************************************************************
WAPC to input a positive integer from the user. Find and display the number of digits in the number,
sum of the digits of the number and product of the digits of the number.
*****************************************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, numberOfDigits, sum = 0, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    numberOfDigits = (int)log10(num) + 1;

    int n = num;
    while (n != 0)
    {
        int d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
    }
    printf("Number of Digits of %d is %d\n", num, numberOfDigits);
    printf("Sum of the digits of %d is %d\n", num, sum);
    printf("Product of the digits of %d is %d ", num, prod);
    return 0;
}