#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int i = 0;
    
    // get name
    string name =  get_string();
    // get leight of string
    int n = strlen(name);
    
    if (name != NULL)
    {
        for (i = 0; i < n; i++)
        {   
            if ( i == 0 && !isspace(name[i]))
            {
                printf("%c", toupper(name[i]));
            }    
            else if(isspace(name[i-1]) && isalpha(name[i]))
            {
                printf("%c", toupper(name[i]));
            }
            
        }
        printf("\n");
    }
}