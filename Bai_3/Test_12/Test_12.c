#include<stdio.h>
#include<math.h>

int check_Prime(int n)
{
    int count=1;
    if (n==1)
    {
        count--;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n%i==0)
            {
                count--;
                break;
            }
        
        }
    }
    return count;
}

void Uoc(int n)
{
    int count = 0;
    printf("Uoc \t Uoc nguyen to \n \n");
    for (int  i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf("%d",i);
            count++;
            if (check_Prime(i))
            {
               printf(" \t x"); 
            }
            
            if (i<n)
            {
                printf("\n");
            }
            
        }
        
    }
    printf("\n");
    printf("So Uoc: %d",count);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    Uoc(n);
    return 0;
}