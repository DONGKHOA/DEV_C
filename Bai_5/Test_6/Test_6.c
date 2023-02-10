#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void standardize(char *str);
void Delete_newline(char *str);
int main()
{
    char str[1000];
    printf("Input string: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);
    Delete_newline(str);
    printf("Output string: ");
    standardize(str);
    return 0;
}
void Delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length -1] =='\n')
    {
        str[length -1] = '\0';
    }
    
}
void standardize(char *str)
{
    // delete space
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[0] == 32)
        {
            for (int i = 0; i < strlen(str); i++)
            {
                str[i] = str[i+1];
            }
        }
        if (i != 0 && str[i] == 32)
        {
            int j = i;
            int count = -1;
            while (j)
            {
                if (str[j] == 32)
                {
                    count++;
                    j++;
                }
                else
                {
                    break;
                }
                
            }
            if (count > 1)
            {
                for (int j = i; j <= strlen(str)-count; j++)
                {
                    str[j] = str[j+count];
                }
            }
            
        }
        if (!isalpha(str[i]))
        {
            if (str[i-1] == 32)
            {
                for (int j = i-1; j <= strlen(str)-1; j++)
                {
                    str[j] = str[j+1];
                }
                
            }
            
        }
        
        if (str[strlen(str) - 1] == 32)
        {
            str[strlen(str) -1] = '\0';
        }
        
    }

    // change character
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
    puts(str);
}