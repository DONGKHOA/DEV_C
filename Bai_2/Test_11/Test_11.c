#include<stdio.h>

int checkPrime_number(int a)
{
    if (a < 2)
    {
        return 0;
    }
    else
    {
        int count =0;
        for (int i = 2; i < a; i++)
        {
            if (a%i==0)
            {
                return 0;
            }
        }
       return 1;
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int count = 1;
    int a=2;
    while (count<=n)
    {
        if (checkPrime_number(a))
        {
            printf("%d ",a);
            count++;
        }
        a++;
    }
    return 0;
}