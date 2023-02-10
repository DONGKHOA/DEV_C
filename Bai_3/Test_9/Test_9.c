#include<stdio.h>

int sum(int n)
{
    int sum = 0;
    while (n!=0)
    {
        int i = n%10;
        sum +=i;
        n/=10;
    }
    return sum;
}
void prime(int n)
{
    for (int i = 2; i <=n; i++)
    {
        int count=0;
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
    
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("tong cac chu so cua n: %d\n",sum(n));
    printf("Phan tich thanh thua so nguyen to: ");
    prime(n);
    return 0;
}