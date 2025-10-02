/*****************************************************************
 WAPC to display prime numbers within a range entered by the user.
******************************************************************/

#include <stdio.h>

// function declaration
int prime(int x);

int main()
{
    int lowerLimit, upperLimit;

    printf("Enter the lower limit and the upper limit of the range: \n");
    scanf("%d %d", &lowerLimit, &upperLimit);

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        if (prime(i) == 1)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}

int prime(int x)
{
    int c = 0;
    for (int i = 1; i <= x; i++)
    {
        if ((x % i) == 0)
        {
            c++;
        }
    }
    if (c == 2)
        return 1;
    else
        return 0;
}