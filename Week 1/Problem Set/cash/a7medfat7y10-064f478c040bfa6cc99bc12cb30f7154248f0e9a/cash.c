#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int cents;
    int count_25;
    int remainer_25;
    int count_10;
    int remainer_10;
    int count_5;
    int remainer_5;
    int count_1;

   //get the change in dollars from user
    do
    {
        //change dollars to cents
        dollars = get_float("what's change in dollars?");
        cents = round(dollars * 100);
    }
    while (cents <= 0);

    //conditions if cents > 25
    if (cents >= 25)
    {
        //count the 25 coins
        count_25 = cents / 25 ;
        //remaining after 25
        remainer_25 = cents % 25;

        if (remainer_25 == 0)
        {
            printf("%i\n", count_25);
        }
        else if (remainer_25 >= 10)
        {
            //count 10 coins
            count_10 = remainer_25 / 10;
            //remainer 10
            remainer_10 = remainer_25 % 10;

            if (remainer_10 == 0)
            {
                printf("%i\n", count_25 + count_10);
            }
            else if (remainer_10 > 5)
            {
                //count 5
                count_5 = remainer_10 / 5 ;
                //remainer 5
                remainer_5 = remainer_10 % 5;

                if (remainer_5 == 0)
                {
                    printf("%i\n", count_25 + count_10 + count_5);
                }
                else if (remainer_5 > 0 && remainer_5 < 5)
                {
                    count_1 = remainer_5;
                    printf("%i\n", count_25 + count_10 + count_5 + count_1);
                }
            }
            else if (remainer_10 > 0 && remainer_10 < 5)
            {
                printf("%i\n", count_25 + count_10 + remainer_10) ;
            }
        }
        else if (remainer_25 > 0 && remainer_25 <5)
        {
            printf("%i\n", count_25 + remainer_25) ;
        }

    }
    //if cents between 10 and 25
    else if (cents >= 10 && cents < 25)
    {
        //count 10
        count_10 = cents / 10;
        //remainer 10
        remainer_10 = cents % 10;
        if (remainer_10 == 0)
        {
            printf("%i\n", count_10);
        }
        else if (remainer_10 >= 5)
        {
            count_5 = remainer_10 / 5 ;
            remainer_5 = remainer_10 % 5;
            if (remainer_5 == 0)
            {
                printf("%i\n", count_10 + count_5);
            }
            else if (remainer_5 > 0 && remainer_5 < 5)
            {
                //count pennies
                count_1 = remainer_5;
                printf("%i\n", count_10 + count_5 + count_1);
            }
        }
        else if (remainer_10 > 0 && remainer_10 < 5)
        {
            printf("%i\n", count_10 + remainer_10) ;
        }
    }
    //if cents between 5 and 10
    else if (cents >= 5 && cents < 10)
    {
        count_5 = cents / 5 ;
        remainer_5 = cents % 5;
        if (remainer_5 == 0)
        {
            printf("%i\n", count_5);
        }
        else if (remainer_5 > 0 && remainer_5 < 5)
        {
            count_1 = remainer_5;
            printf("%i\n", count_5 + count_1);
        }
    }
    // if all pennies
    else if (cents >= 1 && cents < 5)
    {
        printf("%i\n", cents);
    }

}