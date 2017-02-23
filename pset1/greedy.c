#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int coins = 0;
    
    printf("How much change is owed? \n");
    
    float change = GetFloat();
    
    while (change<=0)
    {
        printf("How much change is owed? \n");
        change = GetFloat();
    }
    
    int amount =  round(change * 100);
    
    while (amount > 0) 
    {
        if ((amount - 25) >= 0) 
        { 
            amount = amount - 25; 
            coins++; 
        }
        else if ((amount - 10) >= 0) 
        { 
            amount = amount - 10; 
            coins++; 
        }
        else if ((amount - 5) >= 0) 
        { 
            amount = amount - 5; 
            coins++; 
        }
        else if ((amount - 1) >= 0) 
        {
            amount = amount - 1; 
            coins++; 
         }
    }
    
    printf("%i\n", coins);
}