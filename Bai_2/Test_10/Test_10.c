#include<stdio.h>

int main()
{
    int count;
    unsigned long n;
    printf("Enter the number n: ");
    scanf("%d",&n);
    for (int  i = 2; i <=n; i++)
    {
        count = 0;
        while (n%i==0)
        {
            ++count;
            n/=i;
        }
        if (count)
        {
            if (count>1)
            {
                printf("%d^%d",i,count);
            }
            else
            {
                printf("%d",i);
            }
            if (n>i)
            {
                printf("*");
            }
        }
    }
    return 0;
}