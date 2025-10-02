/******************************************************************************
WAPC to do the following:
Input: height (m), weight (kg).
Calculate BMI = weight / (height²).
Classify:
BMI < 18.5 → Underweight
18.5 ≤ BMI < 25 → Normal
25 ≤ BMI < 30 → Overweight
≥ 30 → Obese
If overweight or obese and age > 40 → print "Consult doctor".
***********************************************************************/

#include <stdio.h>
int main()
{
    float ht, wt;
    int age;

    printf("Enter the height (in m) and weight (in kg)\n");
    scanf("%f %f", &ht, &wt);

    float bmi = wt / (ht * ht);

    if (bmi < 18.5)
    {
        printf("Underweight \n");
    }
    else if (bmi < 25)
    {
        printf("Normal \n");
    }
    else if (bmi < 30)
    {
        printf("Overweight\n");

        printf("Enter your age: \n");
        scanf("%d", &age);
        if (age > 40)
        {
            printf("Please consult a Doctor");
        }
    }
    else
    {
        printf("Obese");

        printf("Enter your age: ");
        scanf("%d", &age);

        if (age > 40)
        {
            printf("Please consult a Doctor");
        }
    }
    return 0;
}