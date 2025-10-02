/**********************************************************************
 WAPC to display the sum of the first ‘n’ odd numbers
 and the sum of the first ‘n’ even numbers separately.
 Here, ‘n’ is the user input.
 **********************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int s1 = 0, s2 = 0;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n * 2; i++)
    {
        if ((i % 2) != 0)
        {
            s1 = s1 + i;
        }
        else
        {
            s2 = s2 + i;
        }
    }
    printf("Sum of first %d odd numbers is: %d \n", n, s1);
    printf("Sum of first %d even numbers is: %d \n", n, s2);
    return 0;
}
