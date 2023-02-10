#include<stdio.h>

int check_Prime_number(int n)
{
    int a=1;
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <n; i++)
        {
            if (n%i==0)
            {
                a = 0;
                break;
            }
        }
        return a;
    }
}
int main()
{
    int a, b;
    printf("Enter a, b: ");
    scanf("%d%d",&a,&b);
    for (int i = a; i <=b; i++)
    {
        if (check_Prime_number(i))
        {
            printf("%d, ",i);
        }
    }
    return 0;
}