#include<stdio.h>

int check_reversible_number(int n)
{
    int b = n, a = 0;
    while (n!=0)
    {
        int i = n%10;
        a+=i;
        a*=10;
        n/=10;
    }
    a/=10;
    if (a==b)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    for (int i = 100; i <=999; i++)
    {
        if (check_reversible_number(i))
        {
            if (i%k==0)
            {
                printf("%d, ",i);
            }
            
        }
        
    }
    
    return 0;
}