/************************************************************************************************
WAPC to accept the weight of a parcel in kilograms and calculate the rate per kilogram
based on the following criteria:

Weight in kilograms  Rate per kilogram
First 5 kilograms     Rs. 800
Next 5 kilograms      Rs. 700
Above 10 kilograms    Rs. 500

Also input the type of the courier (‘I’ for International and ‘D’ for Domestic).
If the type of the courier is International, an additional amount of Rs. 1500 is levied.
**************************************************************************************************/
#include <stdio.h>

int main()
{
    float weight, amount = 0;
    char type;

    printf("Enter the weight of the parcel (in kg): ");
    scanf("%f", &weight);

    printf("Enter the type of courier ('I' for International, 'D' for Domestic): ");
    scanf(" %c", &type);

    // Calculate charges based on weight
    if (weight <= 5)
    {
        amount = weight * 800;
    }
    else if (weight <= 10)
    {
        amount = 5 * 800 + (weight - 5) * 700;
    }
    else
    {
        amount = 5 * 800 + 5 * 700 + (weight - 10) * 500;
    }

    // Add international surcharge if applicable
    if (type == 'I' || type == 'i')
    {
        amount += 1500;
    }

    printf("Total courier charges: Rs. %.2f\n", amount);

    return 0;
}
