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
    
    string k = argv[1];
    int k_len = strlen(k);

    for (int i = 0;  i < k_len; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("rofl\n");
            return 1;
        } 

    }
    
    printf("plaintext:  ");
    string text = get_string();
    printf("ciphertext: ");
    int n = strlen(text);
    
    int i, j;
    char new_k[ n + 1 ];
    for ( i = 0 ; i < n ; i++)
    {
       if ( i < k_len )
		{
			j = i;
		}
		else
		{
			j = i % k_len;
		}
		
		new_k[i] = k[j];
    }
    j=0;
    for ( i =0 ; i < n ; i++)
    {
        if (isalpha (text[i]))
        {
            
            if (isupper(text[i]) && isupper(new_k[j]))
            {
                printf("%c", ((((text[i] - 65) + (new_k[j]-65)) % 26) + 65));
                j++;
            }
            else if (isupper(text[i]) && islower(new_k[j]))
            {
                printf("%c", ((((text[i] - 65) + (new_k[j] - 97)) % 26) + 65));
                j++;
            }
            else if (islower(text[i]) && isupper(new_k[j]))
            {
                printf("%c", ((((text[i] - 97) + (new_k[j] - 65)) % 26) + 97));
                j++;
            }
            else if (islower(text[i]) && islower(new_k[j]))
            {
                printf("%c", ((((text[i] - 97) + (new_k[j] - 97)) % 26) + 97));
                j++;
            }
            
        }
        else
        {
            printf("%c", text[i]);
        }
    }    
    printf("\n");
    return 0;    
}
