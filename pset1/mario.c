#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i=0;
    int h=0;
    int x=0;
    int y=0;

    do
    {
        printf("Height:");
        h = GetInt();
    } while (h<0 || h>23);

    for (i=0; i<h; i++)
    {
        for (x=1; x<h-i; x++)
        {
            printf(" ");
        }
        for (y=0; y<i+2; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}