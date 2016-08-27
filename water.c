#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("Please tell me how many minutes you spend in the shower.");
    int bottles, min=GetInt();
    bottles=min*12;
    printf("You Use %d bottles of water!",bottles);
    
}




    