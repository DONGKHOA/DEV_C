#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the integer number n : ");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        if (n%i ==0)
        {
            count+=1;
        }
    }
    if (count ==2)
    {
        printf("n is the prime number");
    }
    else
    {
        printf("n isn't the prime number");
    }
    return 0;
}