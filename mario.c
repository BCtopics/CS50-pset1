#include <stdio.h>
#include <cs50.h>

int main(void)  //this is where I'm starting the program

{
    int height = 0;     //this is creating a integer/variable called height and setting it to 0
    
    do 
    
    {
        printf("Please select your pyrimd height");     //this is asking the user for there pyrmid height, this will get a integer as a response
        height = GetInt();
        if (height == 0)
        
        {
            return 0;
        }
    } while (height < 1 || height > 23);        //this will ensure the number is between 1 and 23
    
    
for(int i = 0; i < height; i++)         //this handles the count of rows to print
{
    for(int j = 0; j < height-i-1; j++)     //this prints the spaces
    {
        printf("%s", " ");
    }
    
    
    for(int k = 0; k < i+2; k++)            //this prints the # marks
    {
        printf("#");
    }
    
    printf("\n");
}
return 0;

            //this is th end of my program :D
            
            
            
    //Bradley AKA cvdasf, AKA BCtpoics







}