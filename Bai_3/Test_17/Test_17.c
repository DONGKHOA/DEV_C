#include<stdio.h>

int main()
{
    printf("Cac so khong tang: ");
    for (int i = 100; i <=999; i++)
    {
        int n = i;
        int count = 1;
        while (n!=0)
        {
            int a = n%10;
            n/=10;
            if (a>n%10 && n!=0)
            {
                count--;
                break;
            }
            
        }
        if (count)
        {
            printf("%d, ",i);
        }
        
    }
    printf("\n");
    printf("Cac so khong giam: ");
    for (int i = 100; i <=999; i++)
    {
        int n = i;
        int count = 1;
        while (n!=0)
        {
            int a = n%10;
            n/=10;
            if (a<n%10 && n!=0)
            {
                count--;
                break;
            }
            
        }
        if (count)
        {
            printf("%d, ",i);
        }
        
    }
    printf("\n");
    printf("Cac so co tong chu so le bang tong chu so chan: ");
    for (int i = 100; i <=999; i++)
    {
        int nSum_odd = 0;
        int nSum_even = 0;
        int n = i;
        while (n!=0)
        {
            if ((n%10)%2==0)
            {
                nSum_even+=(n%10);
            }
            else
            {
                nSum_odd+=(n%10);
            }
            n/=10;
        }
        if (nSum_odd== nSum_even)
        {
            printf("%d, ",i);
        }
        
    }
    
    return 0;
}