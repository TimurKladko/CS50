#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int t = GetInt();
    
    if (t>0)
    {
        printf("bottles: %i\n", t*12);
    }
    else 
    {
        printf("Wrong time data\n");
    }
}