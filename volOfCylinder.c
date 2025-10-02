/***********************************************************************************
WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.
************************************************************************************/
#include <stdio.h>
#define PI 3.14159f

int main()
{
    float radius, height, volume;

    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of cylinder: ");
    scanf("%f", &height);
    volume = PI * radius * radius * height;

    printf("Volume of cylinder = %.2f\n", volume);
    return 0;
}
