/*****************************************************
WAPC to do the following:
Input: account balance, withdrawal amount.
Follow the given rules:
Withdrawal amount must be a multiple of 100.
Withdrawal must not exceed balance.
Maintain a minimum balance of ₹500 after withdrawal.
Output: Transaction success or failure with reason
*****************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    float accBalance, wdAmt;

    printf("Enter the current account balance: \n");
    scanf("%f", &accBalance);
    printf("Enter withdrawal amount: \n");
    scanf("%f", &wdAmt);

    if ((fmod(wdAmt, 100.0) == 0.0) && (wdAmt < accBalance))
    {
        accBalance -= wdAmt;
        if (accBalance >= 500)
        {
            printf("Transaction Success\n");
            printf("Remaining Balance: %.2f", accBalance);
        }
        else
        {
            printf("Transaction Failure\nBalance remaining after withdrawal is lesser than 500");
        }
    }
    else if (wdAmt > accBalance)
    {
        printf("Transaction Failure\nWithdrawal Amount is more than remaining Account Balance");
    }
    else if ((fmod(wdAmt, 100.0) != 0.0))
    {
        printf("Transaction Failure\nWithdrawal Amount must be a multiple of 100");
    }

    return 0;
}