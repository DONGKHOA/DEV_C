#include <stdio.h>
#include <string.h>
#include <conio.h>

void find_word(char *str);
int main()
{
    char str[1000];
    printf("Input string: ");
    fgets(str,sizeof(str), stdin);
    find_word(str);
    return 0;
}

void find_word(char *str)
{
    int str1[1000] = {0};
    for (int  i = 0; i < strlen(str); i++)
    {
        if (str[i] == 32 || i == 0)
        {
            int count = 0;
            while (count >= 0)
            {
                count++;
                if (str[i + count] == 32 || (i + count) == (strlen(str) - 1))
                {
                    break;
                }
                
            }
            if (i != 0 && i < strlen(str) - 1)
            {
                count--;
            }
            
            if (str1[count] == 0)
            {
                str1[count] = i+1;
            }
            
        }
        
    }
    
    int max;
    int count_max;
    for (int i = 0; i < 1000; i++)
    {
        if (str1[i] != 0)
        {
            max = str1[i];
            count_max = i;
        }
        
    }
    printf("%d\n",count_max);
    int i = 0;
    while (i <= count_max)
    {
        printf("%c",str[max + i]);
        i++;
    }
    
}