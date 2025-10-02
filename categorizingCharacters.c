/************************************************************************************
WAPC to input a character. Categorize it as either uppercase letter, lowercase letter,
number or any other miscellaneous symbol.
*************************************************************************************/

#include <stdio.h>

int main()
{
    char ipChar;
    int asciiValue;
    printf("\nEnter a character constant: ");
    scanf("%c", &ipChar);
    asciiValue = ipChar;
    if (asciiValue >= 65 && asciiValue <= 90)
    {
        printf("\n%c is an uppercase letter", ipChar);
    }
    else if (asciiValue >= 97 && asciiValue <= 122)
    {
        printf("\n%c is a lowercase letter", ipChar);
    }
    else if (asciiValue >= 48 && asciiValue <= 57)
    {
        printf("\n%c is a digit", ipChar);
    }
    else
    {
        printf("\n%c is a miscellaneous symbol", ipChar);
    }
    return 0;
}
