#include "..\header\character.h"

// define function

void delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
    
}

void Standardized_String(char *str)
{
    delete_newline(str);

    // delete space
    for (int i = 0; i < strlen(str); i++)
    {
        if (i == 0)
        {
            if (str[i] == 32)
            {
                int count = 0;
                while (1)
                {
                    if(str[count] == 32)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    
                }
                for (int i = 0; i <= strlen(str) - count; i++)
                {
                    str[i] = str[i + count];
                }
                
            }
            
        }
        else
        {
            if (str[i] == 32 && str[i + 1] == 32)
            {
                int a = i;
                int count = 0;
                while (1)
                {
                    if (str[i + count] == 32)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    
                }
                count--;
                if (count >= 2)
                {
                    for (int i = a; i <= strlen(str) - count; i++)
                    {
                        str[i] = str[i + count];
                    }
                }
                
            }
            
        }
        
    }
    if (str[strlen(str) - 1] == 32)
    {
        int count = 0;
        while (1)
        {
            if (str[strlen(str) - 1 - count] == 32)
            {
                count++;
            }
            else
            {
                break;
            }
            
        }
        count--;
        str[strlen(str) - 1 - count] = '\0';
    }
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            str[i] += 32;
        }
        
        if (islower(str[0]))
        {
            str[0] -= 32;
        }

        if (str[i] == 32)
        {
            if (islower(str[i+1]))
            {
                str[i+1] -= 32;
                i++;
            }
            
        }
        
    }
    
}

char *Last_Word_string(char *str)
{
    char *str_t;
    str_t = (char *)malloc(sizeof(str));
    size_t length = strlen(str);
    int count = 0;
    while (1)
    {
        if (str[length - count -1] != 32)
        {
            count++;
        }
        else
        {
            break;
        }
        
    }
    int j = 0;
    for (int i = length - count ; i < strlen(str); i++)
    {
        *(str_t + j) = str[i];
        j++;
    }
    *(str_t + j) = '\0';
    return str_t;
}