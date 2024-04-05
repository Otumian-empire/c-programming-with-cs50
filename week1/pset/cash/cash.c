// cash.c
// I realized that we are looking for the number of coins
// not the total number of individual coins used for the change
#include "../../../cs50.h"
#include <stdio.h>

#define quarters 25
#define dimes 10
#define nickles 5
#define pennies 1

int main(void)
{
    float change_owed;
    int cents, num_coins = 0;

    do
    {
        change_owed = get_float("Change owed: ");
    } while (change_owed < 0);

    cents = change_owed * 100;

    if (cents >= quarters)
    {
        num_coins += 1;
        cents %= quarters;
    }

    if (cents >= dimes)
    {
        num_coins += 1;
        cents %= dimes;
    }

    if (cents >= nickles)
    {
        num_coins += 1;
        cents %= nickles;
    }

    if (cents >= pennies)
    {
        num_coins += 1;
        cents %= pennies;
    }

    printf("%d\n", num_coins);

    return 0;
}
