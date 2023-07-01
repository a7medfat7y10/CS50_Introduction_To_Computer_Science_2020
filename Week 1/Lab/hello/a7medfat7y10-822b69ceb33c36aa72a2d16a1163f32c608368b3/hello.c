#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //getting the user name
    string name = get_string("what's your name?");
    printf("hello, %s\n", name);
}