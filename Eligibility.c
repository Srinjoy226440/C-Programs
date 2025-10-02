/*************************************************************************************
WAPC to input the age of a person. Check and display if the person is eligible to vote.
**************************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int age;
    printf("\nEnter the age: ");
    scanf("%u", &age);
    if (age >= 18)
    {
        printf("\nThe person is eligible to vote");
    }
    else
    {
        printf("\nThe person is not eligible to vote");
    }
    return 0;
}
