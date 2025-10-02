/************************************************************************
 WAPC to input two numbers and swap them without using a third variable.
************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping values
    a = a + b;
    b = a - b;
    a = a - b;
    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
