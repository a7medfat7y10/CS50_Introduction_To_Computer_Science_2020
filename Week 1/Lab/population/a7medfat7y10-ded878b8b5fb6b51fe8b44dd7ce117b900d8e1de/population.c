#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // TODO: Prompt for start size
    // TODO: Prompt for end size
    int start;

    int end;

    do
    {
        start = get_int("what's start?");
    }
    while (start < 9);

    do
    {
        end = get_int("what's end?");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    for (int n = start; n < end ; n = n + (n / 3) - (n / 4))
    {
        years++;
    }

    // TODO: Print number of years
    if (start == end)
    {
        printf("Years: 0 ");
    }
    else
    {
        printf("Years: %i\n", years);
    }
}