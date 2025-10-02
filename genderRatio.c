/****************************************************************************************************
 WAPC to find the gender ratio based on the number of males and number of females entered as inputs.
*****************************************************************************************************/
#include <stdio.h>

int main()
{
    int males, females;
    float ratio;

    printf("Enter the number of males: ");
    scanf("%d", &males);

    printf("Enter the number of females: ");
    scanf("%d", &females);

    // Check to avoid division by zero
    if (males == 0)
    {
        printf("Gender ratio cannot be calculated because the number of males is zero.\n");
    }
    else
    {
        ratio = ((float)females / males) * 1000;
        printf("Gender Ratio (females per 1000 males) = %.2f\n", ratio);
    }

    return 0;
}
