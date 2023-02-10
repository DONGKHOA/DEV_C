#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[15];
    printf("Input string: ");
    fgets(str, sizeof(str), stdin);
    printf("a.toupper\n");
    printf("b.tolower\n");
    char check;
    check = getchar();
    switch (check)
    {
    case 'a':
    case 'A':
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i]>=97 && str[i]<=122)
            {
                str[i]-=32;
            }

        }
        printf("%s",str);
        break;
    case 'b':
    case 'B':
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i]>=65 && str[i]<=90)
            {
                str[i]+=32;
            }

        }
        printf("%s",str);
        break;
    default:
    printf("Retype!!!");
        break;
    }
    return 0;
}