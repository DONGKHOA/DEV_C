#include<stdio.h>

int main()
{
    int h, a = 1;
    printf("Enter h: ");
    scanf("%d",&h);
    for (int i = 1; i <=h; i++)
    {
        for (int i = 1; i <=a; i++)
        {
            printf(" * ");
        }
        a++;
        printf("\n");
    }
    
    return 0;
}