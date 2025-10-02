/*********************************************************************
 WAPC to input the temperature in Celsius and output it in Fahrenheit.
**********************************************************************/
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ((float)9 / (float)5) * celsius + 32;
    printf("Temperature in Fahrenheit is %.2f", fahrenheit);
    return 0;
}