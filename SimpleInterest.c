/**********************************************************
 WAPC to find the simple interest based on user inputs.
**********************************************************/
#include <stdio.h>
int main()
{
    float p, r, t;
    printf("Enter the Principal Amount: ");
    scanf("%f", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time (in years): ");
    scanf("%f", &t);

    float si = (p * r * t) / 100;
    printf("Simple Interest is: %.2f\n", si);

    return 0;
}
