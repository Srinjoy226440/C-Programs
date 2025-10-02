/*********************************************************************************
WAPC to input a positive integer. Check whether the number is Sunny or not.
Note: Sunny Number – A number for which the next number is a perfect square.
Example: 8 (since 8+1=9 which is 3²)
**********************************************************************************/
#include <stdio.h>
#include <math.h>

int square(int x)
{
    int root = (int)sqrt(x);

    if (root * root == x)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    int n = num + 1;

    if (square(n) == 1)
        printf("%d is a Sunny Number", num);
    else
        printf("%d is NOT a Sunny Number", num);
    return 0;
}
