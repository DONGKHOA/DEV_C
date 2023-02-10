#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char str[1000];
    printf("Input string: ");
    fgets(str, sizeof(str), stdin);
    printf("%d\n",strlen(str));
    int cout_up = 0;
    int cout_low = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            cout_up++;
        }
        else if (islower(str[i]))
        {
            cout_low++;
        }
        
    }
    printf("up: %d\n",cout_up);
    printf("low: %d\n",cout_low);
    return 0;
}