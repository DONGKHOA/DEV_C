#include <stdio.h>
#include <string.h>
#include <conio.h>

void delete_newline(char *str);
int check_reversible(char *str, int mid);
int main()
{
    char str[15];
    printf("Enter: ");
    fgets(str, sizeof(str), stdin);
    delete_newline(str);
    int mid = strlen(str)/2 + 1;

    if (check_reversible(str, mid))
    {
        printf("This is a reversible");
    }
    else
    {
        printf("This isn't a reversible");
    }
    
    return 0;
}
void delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length -1 ] == '\n')
    {
        str[length -1] = '\0';
    }
    
}
int check_reversible(char *str, int mid)
{
    int x = 0;
    for (int i = strlen(str); i >= mid; i--)
    {
        if (str[i] != str[x])
        {
            return 0;
        }
        x++;
    }
    return 1;
}