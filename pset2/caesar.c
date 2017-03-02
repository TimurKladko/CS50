#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    
    if (argc != 2)    
    {        
        printf("rofl\n");        
        return 1;
    }
    
    int k = atoi(argv[1]);
    
    if (k < 0)
    {   
        printf("rofl\n");        
        return 1;
    }
    
    string text = get_string();
    
    for (int i =0 , n = strlen(text); i < n; i++)
    
        if (isalpha (text[i]))
        {
            if (isupper(text[i]))
            {
                printf("%c", (((text[i] + k) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", (((text[i] + k) - 97) % 26) + 97);
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    printf("\n");
    return 0;    
}