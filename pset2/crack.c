#define _XOPEN_SOURCE
#define SALT "50"

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main(int argc, string argv[])
{    
    if (argc != 2)    
    {        
        printf("rofl\n");        
        return 1;
    }
        char *hash = argv[1];
        char pass[5];     
        for ( char i= '0' ; i <= 'z';i++)
        {   
            pass[0] = i;
            pass[1] = '\0';
            if (strcmp(hash, crypt(pass, SALT)) == 0)
            {
                printf("Found password: %s\n", pass);
                return 0;
            }
                    for ( char j = '0' ; j <= 'z';j++)
                    {       
                        pass[1] = j;
                        pass[2] = '\0';
                        if (strcmp(hash, crypt(pass, SALT)) == 0)
                        {
                            printf("Found password: %s\n", pass);
                            return 0;
                    }
                        for ( char k = '0' ; k <= 'z'; k++ )
                        {   
                            pass[2] = k;
                            pass[3] = '\0';
                            if (strcmp(hash, crypt(pass, SALT)) == 0)
                            {
                                printf("Found password: %s\n", pass);
                                return 0;
                            }
                                for ( char l = '0'; l <= 'z'; l++)
                                {         
                                    pass[3] = l;
                                    pass[4] = '\0';
                                    if (strcmp(hash, crypt(pass, SALT)) == 0)
                                    {
                                        printf("Found password: %s\n", pass);
                                        return 0;
                                    }
                                }      
                            }             
        }
    }
    printf("Could not found password\n");
    return 2;
}
