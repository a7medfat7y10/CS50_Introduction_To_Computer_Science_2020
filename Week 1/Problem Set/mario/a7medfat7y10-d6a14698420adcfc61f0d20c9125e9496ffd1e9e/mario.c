#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //get the height from user
    int height;
    do
    {
        height = get_int("what's required height?");
    }
    while (height < 1 || height > 8);

    //loop to make number of rows equal to the height
    for (int i = 0; i < height ; i++)
    {
        //to put the spaces before hashes
        for (int j = height - 1 ; j > i; j--)
        {
            printf(" ");
        }
        //to put the hashes
        for (int j = 0 ; j <= i; j++)
        {
            printf("#");
        }
        //create  new line
        printf("\n");
    }
}