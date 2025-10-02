/***************************************************
WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date".
***************************************************/

#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1; // leap year
    else
        return 0; // not leap year
}

int main()
{
    int day, month, year;
    int maxDays;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12)
    {
        printf("Invalid date\n");
        return 0;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
    {
        maxDays = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        maxDays = 30;
    }
    else if (month == 2)
    {
        if (isLeapYear(year))
            maxDays = 29;
        else
            maxDays = 28;
    }

    // Check valid day
    if (day >= 1 && day <= maxDays)
    {
        printf("Valid date\n");
    }
    else
    {
        printf("Invalid date\n");
    }

    return 0;
}
