#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str1[1000];
    char str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int i = 0;
    while (str1[i])
    {
        str1[i] = tolower(str1[i]);
        i++;
    }
    i = 0;
    while (str2[i])
    {
        str2[i] = tolower(str2[i]);
        i++;
    }
    int cond = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] > str2[i])
        {
            cond++;
            break;
        }
        if (str1[i] < str2[i])
        {
            cond--;
            break;
        }
        
    }
    printf("%d",cond);
    return 0;
}