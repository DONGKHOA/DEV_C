#include<stdio.h>
#include<math.h>

int check_Prime(int n)
{
    int a = 1;
    if (n<2)
    {
        a--;
    }
    else
    {
        for (int i = 2; i <=sqrt(n); i++)
        {
            if (n%i==0)
            {
                a--;
                break;
            }
            
        }
        
    }
    return a;
}
int main()
{
    printf("So nguyen to: ");
    for (int  i = 100; i <=999; i++)
    {
        if (check_Prime_number(i))
        {
            printf("%d,",i);
        }
            
    }
    printf("\n");
    printf("Chi chua chu so nguyen to: ");
    for (int i = 100; i <=999; i++)
    {
        int n = i;
        int count = 1;
        while (n!=0)
        {
            if (!check_Prime_number(n%10))
            {
                count--;
                break;
            }
            n/=10;
        }
        if (count)
        {
            printf("%d,",i);
        }
            
    }
    printf("\n");
    printf("Tong cac chu so la so nguyen to: ");
    for (int i = 0; i <=999; i++)
    {
        int n = i;
        int sum = 0;
        while (n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        if (check_Prime_number(sum))
        {
            printf("%d, ",i);
        }
            
    }
        
    
    return 0;
}