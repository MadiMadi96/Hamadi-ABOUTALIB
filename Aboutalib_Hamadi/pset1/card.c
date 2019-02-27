// program that determines whether a provided credit card number is valid or not
#include <stdio.h>
#include <cs50.h>

int main(void)
{

    long long cc_number;
    int var1 = 0, var2 = 0, sum1 = 0, sum2 = 0, total_sum = 0;

    do
    {
        cc_number = get_long_long("Type a valid credit card number: ");
    }
    while (cc_number <= 0);


    // sum every digit starting with the last
    for (var1 = cc_number; var1 > 0; var1 /= 100)
    {
        sum1 += var1 % 10;
    }
    // multiply every digit starting with the 2nd to last
    // then sum the every digit of the product
    for (var2 = cc_number / 10; var2 > 0; var2 /= 100)
    {
        if (2 * (var2 % 10) > 9)
        {
            sum2 += (2 * (var2 % 10)) / 10;
            sum2 += (2 * (var2 % 10)) % 10;
        }
        else
        {
            sum2 += 2 * (var2 % 10);
        }
    }
    total_sum = sum1 + sum2;
    // check to see if the cc number is valid or not
    if (total_sum % 10 == 0)
    {
        if ((cc_number >= 340000000000000 && cc_number < 350000000000000) || (cc_number >= 370000000000000 && cc_number < 380000000000000))
        {
            printf("The card is an AMERICAN EXPRESS card\n");
        }
        else if (cc_number >= 5100000000000000 && cc_number < 5600000000000000)
        {
            printf("The card is a MASTERCARD card\n");
        }
        else if (cc_number >= 4000000000000 && cc_number < 5000000000000)
        {
            printf("The card is a VISA card\n");
        }
        else
        {
            printf("The card is INVALID\n");
        }
    }
    else
    {
        printf("The card is INVALID\n");
    }


}