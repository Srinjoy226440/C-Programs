/**********************************************************************************
WAPC to input the coordinates of two points (x1, y1) and (x2, y2).
Calculate the slope and display the same.
***********************************************************************************/
#include <stdio.h>
int main()
{
    int x1, x2, y1, y2;
    printf("Enter the co-ordinates of the two points: \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    float slope = (float)(y2 - y1) / (x2 - x1);
    printf("The Slope is: %.2f", slope);
    return 0;
}