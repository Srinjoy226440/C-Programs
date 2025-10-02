/**********************************************************************
 WAPC to input two integers and display the contents after swapping.
 **********************************************************************/
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
