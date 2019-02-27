// Program that calculate the minimum amount of coins

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declaring and initializing variables
    int amount = 0, change = 0, zangou = 500, waygou = 250, waytaki = 200, waranka = 100, dalway = 50, dalgou = 25,
        dalhinka = 10, dalfo = 5, un_franc = 1;


    //Prompt the user to type the amount in CFA and check if it is valid amount
    do
    {
        amount = get_int("type a valid amount in CFA:  ");
    }
    while (amount < 0);

    while (amount >= zangou)
    {
        change++;
        amount -= zangou;
    }
    while (amount >= waygou)
    {
        change++;
        amount -= waygou;
    }
    while (amount >= waytaki)
    {
        change++;
        amount -= waytaki;
    }
    while (amount >= waranka)
    {
        change++;
        amount -= waranka;
    }
    while (amount >= dalway)
    {
        change++;
        amount -= dalway;
    }
    while (amount >= dalgou)
    {
        change++;
        amount -= dalgou;
    }
    while (amount >= dalhinka)
    {
        change++;
        amount -= dalhinka;
    }
    while (amount >= dalfo)
    {
        change++;
        amount -= dalfo;
    }
    while (amount >= un_franc)
    {
        change++;
        amount -= un_franc;
    }
    printf("%i is the minimum of coins that will be returned to the user \n", change);


}