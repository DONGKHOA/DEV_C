#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void solution(char *str);
void delete_newline(char *str);
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    delete_newline(str);
    solution(str);
    return 0;
}
void delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
    
}
char *digit_alpha(char *str)
{
    char *p;
    p = (char *)malloc(strlen(str)+1);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]) || isalpha(str[i]))
        {
            *(p + count) = str[i];
            count++;
        }
        
    }
    *(p + count) = '\0';
    return p;
}

void solution(char *str)
{
    char *p;
    int parity_le[10]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int parity_chan[10] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
    int sum = 0, count = 0, temp, count_x = 0;
    p = digit_alpha(str);
    
    for (int i = 0; i < 16; i++)
    {
        if (i%2==0 && isdigit(*(p + i)))
        {
            sum+=parity_chan[*(p+i)-48];
            count++;
        }
        if (i%2==1 && isdigit(*(p + i)))
        {
            sum+=parity_le[*(p+i)-48];
            count++;
        }
        if (isalpha(*(p+i)))
        {
            temp = i;
            count_x++;
        }
        
    }
    if (count == 16)
    {
        if (sum % 10 == 0)
        {
            printf("Pass");
        }
        else
        {
            printf("No Pass");
        }
        
    }
    else
    {
        if (count_x == 0)
        {
            printf("No Valid");
        }
        else if (count_x>1)
        {
            printf("No Valid");
        }
        else
        {
            if (temp%2==0)
            {
                int i = 0;
                while (1)
                {
                    sum+=parity_chan[i];
                    if (sum%10==0)
                    {
                        printf("x = %d",i);
                        break;
                    }
                    else
                    {
                        sum-=parity_chan[i];
                        i++;
                    }
                    
                }
                
            }
            else
            {
                int i = 0;
                while (1)
                {
                    sum+=parity_le[i];
                    if (sum%10==0)
                    {
                        printf("x = %d",i);
                        break;
                    }
                    else
                    {
                        
                        sum-=parity_le[i];
                        i++;
                    }
                    
                }
            }
            
        }
        
    }
    free(p);
}