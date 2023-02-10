#include<stdio.h>
#include<math.h>

void Prime(int n)
{
    int count = 0;
    int a = 2;
    while (count <=n)
    {
        int k =1;
        for (int  i = 2; i <=sqrt(a); i++)
        {
            if (a%i==0)
            {
                k--;
                break;
            }

        }
        if (k)
        {
            printf("%d",a);
            count++;
            if (count<=n)
            {
                printf(",");
            }
            
        }

        a++;
    }
       
}
int fibonacci(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
}
void Perfect_Square(int n)
{
    int count = 0;
    int i = 1;
    while (count<=n)
    {
        printf("%d",i*i);
        if (count<n)
        {
            printf(",");
        }
        i++;
        count++;
    }
    
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    Prime(n);
    printf("\n");
    for (int i = 0; i <=n; i++)
    {
        printf("%d",fibonacci(i));
        if (i<n)
        {
            printf(",");
        }
        
    }
    printf("\n");
    Perfect_Square(n);
    return 0;
}