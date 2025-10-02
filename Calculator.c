/***************************************************************************************
With the help of 4 user-defined functions,
design a basic calculator capable of addition, subtraction, multiplication and division.
***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

float add(float x, float y)
{
    return x + y;
}

float subtract(float x, float y)
{
    if (x > y)
        return x - y;
    else
        return y - x;
}

float multiply(float x, float y)
{
    return x * y;
}

float divide(float x, float y)
{
    if (y != 0.0f)
        return x / y;
    else
    {
        printf("Cannot divide by 0\n");
        exit(0);
    }
}

int main()
{
    int c;
    float R, a, b;

    printf("Enter the operands: ");
    scanf("%f %f", &a, &b);

    printf("Please choose among the following calculation options:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        R = add(a, b);
        break;
    case 2:
        R = subtract(a, b);
        break;
    case 3:
        R = multiply(a, b);
        break;
    case 4:
        R = divide(a, b);
        break;
    default:
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Result: %.2f\n", R);

    return 0;
}