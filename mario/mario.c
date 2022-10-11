#include <stdio.h>
#include <cs50.h>

int main(void)
//declare variables
{
    int h;
    int row;
    int space;
    int hash;
    //prompt user to type the height, but must be between 1 and 8
    do
    {
        h = get_int("Height: ");
    }
    while (h > 8 || h < 1);

    for (row = 1; row <= h; row++)
    {
        // here you have to find a formula for the number of spaces and print it
        for (space = (h - row); space > 0; space--)
        {
            printf(" ");
        }
        // once you have checked that the spaces work, you need to generate hashes and print it
        for (hash = 1; hash <= row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }








}