/**********************************************************************************************************
WAPC to input a positive integer. Check whether it is Kaprekar or not.
Note: Kaprekar Number – A number whose square can be split into two parts that add up to the number itself.
Example: 45² = 2025 → 20 + 25 = 45
***********************************************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, digits, divisor, left, right, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    // counting digits in num
    digits = (int)log10(num) + 1;

    // divisor to split square
    divisor = (int)pow(10, digits);

    right = square % divisor;
    left = square / divisor;

    sum = left + right;

    if (sum == num)
    {
        printf("%d is a Kaprekar number.\n", num);
    }
    else
    {
        printf("%d is NOT a Kaprekar number.\n", num);
    }

    return 0;
}
