#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int initsize;

    do 
    {
        initsize = get_int("Starting size: ");
    }
    while (initsize < 9);

    // Prompt for end size
    int endsize;

    do 
    {
        endsize = get_int("Endsize:");
    }
    while (endsize < initsize);
    // Calculate number of years until we reach threshold
    int gain = 0;
    int lose = 0;
    int years = 0;
    int population = initsize;

    while (population < endsize) 
    {
        gain = population / 3;
        lose = population / 4;
        population = population + gain - lose;
        years++;
    }


    // Print number of years
    printf("Years: %d\n", years);
}