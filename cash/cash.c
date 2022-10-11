#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
//declaring variables
{
    int coins = 0;
    float price;
//prompting user to ask for change due, must be bigger than zero. If it is smaller than zero, user should be re-prompted.

    do
    {
        price = get_float("Change owed: ");
    }
    while (price <= 0);

    //convert dollars to cents.
    price = round(price * 100) ;

    // using while loops to set conditions for 4 types of coins we must use. We use coins++ to subtract until we reach a number 25> to stop the program.

    while (price >= 25)
    {
        price -= 25;
        coins++;
    }

    while (price >= 10)
    {
        price -= 10;
        coins++;
    }

    while (price >= 5)
    {
        price -= 5;
        coins++;
    }

    while (price >= 1)
    {
        price -= 1;
        coins++;
    }



    printf("%i\n", coins);
}