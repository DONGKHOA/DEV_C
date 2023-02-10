#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void DELETE_new_line(char *str)
{
    size_t length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] == '\0';    //end string
    }
    
}
char *STRING_cpy(char *a)
{
    for (int i = 0; i < sizeof(a); i++)
    {
        
    }
    
}
char *ENCODE(char *str)
{
    char *p;
    // char *temp;
    // temp = (char *)malloc(strlen(str));
    char temp[100];
    strcpy(temp, str);
    p = (char *)malloc(strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(temp[i]))
        {
            if (temp[i] >= 68 && temp[i] <= 90)
            {
                temp[i]-=3;
                *(p+i) = temp[i];
            }
            else
            {
                temp[i]+=23;
                *(p+i) = temp[i];
            }
            
        }
        *(p+i) = temp[i];
    }
    *(p + strlen(str)) = '\0';
    return p;
}
char *DECODE(char *str)
{
    char *p;
    p = (char *)malloc(strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
        {
            if (str[i] >= 65 && str[i] <= 87)
            {
                str[i]+=3;
                *(p+i) = str[i];
            }
            else
            {
                str[i]-=23;
                *(p+i) = str[i];
            }
            
        }
        *(p+i) = str[i];
    }
    *(p + strlen(str)) = '\0';
    return p;
}
int main()
{
    char str[100];
    printf("Input string: ");
    fgets(str, sizeof(str), stdin);
    DELETE_new_line(str);   //delete character "enter" in string
    char *str_o, *temp;
    str_o = ENCODE(str);
    puts(str_o);
    free(str_o);
    str_o = DECODE(str);
    puts(str_o);
    free(str_o);
    return 0;
}