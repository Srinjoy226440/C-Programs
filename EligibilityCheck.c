/********************************************************************
WAPC to do the following:
Input: age, citizenship status (Y/N), criminal record (Y/N).
Eligible if: age ≥ 18 and citizenship = Y and no criminal record.
If age ≥ 60, print "Senior Citizen Eligible".
If not eligible, specify why.
**********************************************************************/
#include <stdio.h>

int main()
{
    int age;
    char citizenship, criminal;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizenship);
    printf("Do you have a criminal record? (Y/N): ");
    scanf(" %c", &criminal);

    // Check eligibility
    if (age >= 18 && (citizenship == 'Y' || citizenship == 'y') && (criminal == 'N' || criminal == 'n'))
    {
        if (age >= 60)
        {
            printf("Senior Citizen Eligible\n");
        }
        else
        {
            printf("Eligible\n");
        }
    }
    else
    {
        printf("Not Eligible because: ");
        if (age < 18)
        {
            printf("Age is less than 18. ");
        }
        if (citizenship != 'Y' && citizenship != 'y')
        {
            printf("Not a citizen. ");
        }
        if (criminal != 'N' && criminal != 'n')
        {
            printf("Has a criminal record. ");
        }
        printf("\n");
    }

    return 0;
}
