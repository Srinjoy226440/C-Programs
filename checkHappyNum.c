/***************************************************************************************
 WAPC to input a positive integer. Check whether it is Happy or not.
  Note: Happy Number – A number that eventually reaches 1 when replaced repeatedly
  by the sum of the squares of its digits.
  Example: 19 → 1²+9²=82 → 8²+2²=68 → 6²+8²=100 … → 1
****************************************************************************************/

#include <stdio.h>

int sumOfSquares(int n)
{
    int sum = 0, digit;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num;
    while (result != 1 && result != 4) // result being 4 means that the number falls into the unhappy number loop
    {
        result = sumOfSquares(result);
    }

    if (result == 1)
    {
        printf("%d is a Happy number.\n", num);
    }
    else
    {
        printf("%d is NOT a Happy number.\n", num);
    }

    return 0;
}
