#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void check(char *str);
int vowel(int a,int b);
int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    check(str);
    return 0;
}
int vowel(int a, int b)
{
    if (a == 65 || a == 69 || a == 85 || a == 79 || a == 73)
    {
        return 1;
    }
    else if (b == 65 || b == 69 || b == 85 || b == 79 || b == 73)
    {
        return 1;
    }
    return 0;
}
void check(char *str)
{
    int arr[128] = {0};
    int count_vowel = 0, count_consonants = 0, count_number = 0, count_dif = 0;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (isalpha(str[i]))
        {
            if (vowel(str[i], str[i] - 32))
            {
                arr[str[i]]
            }
            else
            {
                count_consonants++;
            }
            
        }
        else if (isdigit(str[i]))
        {
            count_number++;
        }
        else
        {
            count_dif++;
        }
        
    }
    printf("The character is vowel: %d\n",count_vowel);
    printf("The character is consonants: %d\n",count_consonants);
    printf("The character is number: %d\n",count_number);
    printf("The character is character difference: %d\n",count_dif);
}