#include<stdio.h>
#include<math.h>

int main()
{
    printf("So thuan nghich: ");
    for (int  i = 100; i <=299; i++)
    {
        int n = i;
        int a = 0;
        while (n!=0)
        {
            a+=n%10;
            n/=10;
            a*=10;
        }
        a/=10;
        if (i == a)
        {
            printf("%d,",i);
        }
        
    }
    printf("\n");
    printf("Khong chua chu so 6: ");
    for (int  i = 100; i <=299; i++)
    {
        int n = i;
        int a;
        while (n!=0)
        {
            a = i%10;
            n/=10;
            if (a==6)
            {
                break;
            }
            
        }
        if (a!=6)
        {
            printf("%d,",i);
        }
        
    }
    printf("\n");
    printf("Tong cac chu so la so nguyen to: ");
    for (int i = 100; i <=299; i++)
    {
        int n = i;
        int sum = 0;
        while (n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        
        int count = 1;
        if (sum==1||sum==0)
        {
            count--;
        }
        else
        {
            for (int i = 2; i <=sqrt(sum); i++)
            {
                if (sum%i==0)
                {
                    count--;
                    break;
                }
                
            }
            
        }
        if (count)
        {
            printf("%d,",i);
        }
        
    }
    
    return 0;
}