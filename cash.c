#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    int cents = round(dollars * 100);

    int coins = 0;
    
    //check 0.25 cents
    while (cents - 25 >= 0)
    {
        cents = cents - 25;
        coins++;
    }
    
    //check 0.10 cents
    while (cents - 10 >= 0)
    {
        cents = cents - 10;
        coins++;
    }
    
    //check 0.5 cents
    while (cents - 5 >= 0)
    {
        cents = cents - 5;
        coins++;
    }
    
    //check 0.1 cents
    while (cents - 1 >= 0)
    {
        cents = cents - 1;
        coins++;
    }

    printf("%d\n", coins);
}
