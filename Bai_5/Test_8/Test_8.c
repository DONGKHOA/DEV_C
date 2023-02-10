#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void delete_newline(char *str);
void change_first_last_name(char *str);
int main()
{
    char str[1000];
    printf("input string: ");
    fgets(str, sizeof(str), stdin);
    delete_newline(str);
    change_first_last_name(str);
    return 0;
}

void delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length -1] = '\n')
    {
        str[length -1] = '\0';
    }    
    
}
void change_first_last_name(char *str)
{
    char str1[1000];
    int i = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 32)
        {
            str1[i] = '\0';
            break;
        }
        str1[i] = str[i];
    }
    char str2[1000];
    int j = 0;
    i = strlen(str) - 1;
    for (; i >= 0; i--)
    {
        if (str[i] == 32)
        {
            break;
        }
        j++;
    }
    int k = j;
    i = strlen(str) - 1;
    for (; i >= 0; i--)
    {
        if (str[i] == 32)
        {
            str2[k] = '\0';
            break;
        }
        j--;
        str2[j] = str[i];
    }
    char str3[1000];
    j = 0;
    i = strlen(str1);
    for (; i < strlen(str) - strlen(str2); i++)
    {
        str3[j] = str[i];
        j++;
    }
    str3[j] = '\0';
    int a = strlen(str2);
    int b = strlen(str3);
    for (int i = 0; i < strlen(str2); i++)
    {
        str[i] = str2[i];
    }
    for (int i = strlen(str2); i < strlen(str2) + strlen(str3); i++)
    {
        str[i] = str3[i - strlen(str2)];
    }
    for (int i = strlen(str2) + strlen(str3); i < strlen(str); i++)
    {
        str[i] = str1[i - strlen(str2) - strlen(str3)];
    }
    
    printf("%s",str);
}
