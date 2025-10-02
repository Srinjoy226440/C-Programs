/********************************************************************************************
WAPC to input the number of units of electricity consumed by a consumer. Calculate and print
the electricity bill based on the following criteria:
First 100 units: Rs. 2 per unit
Next 200 units: Rs. 3 per unit
Above 300 units: Rs. 4 per unit
A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units.
*********************************************************************************************/

#include <stdio.h>

int main()
{
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2.0;
    }
    else if (units <= 300)
    {
        bill = (100 * 2.0) + (units - 100) * 3.0;
    }
    else
    {
        bill = (100 * 2.0) + (200 * 3.0) + (units - 300) * 4.0;
        bill = bill + (bill * 0.025);
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);
    return 0;
}
