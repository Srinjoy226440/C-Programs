/**********************************************************************************************************
WAPC to input a positive integer from the user. Check and print if the number is palindrome or not.
Note: A palindrome number is a number that remains the same when its digits are reversed, for example, 121.
***********************************************************************************************************/
#include <stdio.h>
int main()
{
    int n;
    int r = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int num = n;
    while (num != 0)
    {
        int d = num % 10;
        r = r * 10 + d;
        num /= 10;
    }
    if (r == n)
    {
        printf("%d is a Palindrome number", n);
    }
    else
    {
        printf("%d is NOT a Palindrome number", n);
    }
    return 0;
}