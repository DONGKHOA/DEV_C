#include <stdio.h>
#include <string.h>

int COUNT_character(char *str)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            count++;
        }
        
    }
    return count;
}
int COUNT_word(char *str)
{
    int count = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 32 && str[i - 1] != 32)
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str),stdin);
    printf("The number of character 'a': %d\n", COUNT_character(str));
    printf("The number of words: %d\n", COUNT_word(str));
    return 0;
}