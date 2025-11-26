#include <stdio.h>
#include <cs50.h>

int main(void)
{
  //Name
    string name= get_string("what is your name? ");

    //section
    char section = get_char("What is your section? ");

    //Percentage
    float percent = get_float("What is your percentage? ");

   printf("My name is %s,section \"%c\" and their percentage was %.2f %%", name , section , percent);
}

