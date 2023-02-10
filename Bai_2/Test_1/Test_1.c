#include<stdio.h>

int main()
{
    int n;
    printf("Enter the naturel number n: ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("Enter n > 0");
    }
    else
    {
        printf("the even number: ");
        for (int i = 0; i <= n; i+=2)
        {
            printf("%d,",i);
        }
        printf("\n");
        printf("the odd number: ");
        for (int i = 1; i <= n; i+=2)
        {
            printf("%d,",i);
        }
    }
    return 0;
}