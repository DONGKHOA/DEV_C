#include <stdio.h>
#include <conio.h>
#include <string.h>

void Enter(char *str);
void Delete_newline(char *str);
void Count_word(char *str);

int main()
{
    char str[1000];
    printf("Input string:");
    Enter(str);
    Delete_newline(str);
    Count_word(str);
    return 0;
}

void Enter(char *str)
{
    fgets(str, sizeof (str), stdin);
}
void Delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length -1] =='\n')
    {
        str[length -1] = '\0';
    }
    
}
void Count_word(char *str)
{
    int count = 0;
    int start = 0;
    while (str[start] < 65 || str[start] > 122 || (str[start] < 97 && str[start] > 90 ))
    {
        start++;
    }
    
    for (int i = start; i <= strlen(str); i++)
    {
        if (str[i]==32)
        {
            if (str[i+1] != 32)
            {
                count++;
            }
            
        }
        
    }
    count++;
    printf("The number of word: %d",count);
}