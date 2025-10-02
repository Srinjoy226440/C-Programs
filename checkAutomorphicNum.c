/***********************************************************************************
WAPC to input a positive integer. Check whether it is Automorphic or not.
Note: A number whose square ends with the number itself is an Automorphic number.
Example: 25² = 625 (ends with 25)
************************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    digits = (int)log10(num) + 1;

    int lastDigits = square % (int)pow(10, digits);

    if (lastDigits == num)
    {
        printf("%d is an Automorphic number.\n", num);
    }
    else
    {
        printf("%d is NOT an Automorphic number.\n", num);
    }

    return 0;
}
