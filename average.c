/******************************************************************************
 WAPC to input five integers from the user. Calculate and print the average.
 ******************************************************************************/
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5;

    printf("Enter the 5 integers: \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    float avg = (float)(n1 + n2 + n3 + n4 + n5) / 5;
    printf("Average of the 5 integers is %.2f", avg);
    return 0;
}
