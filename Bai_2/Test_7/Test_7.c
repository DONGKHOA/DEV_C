#include<stdio.h>

int main()
{
    int n, nSum = 0;
    printf("Enter the natural number n: ");
    scanf("%d",&n);
    for (int  i = 0; i <=n; i++)
    {
        if (i%7 ==0)
        {
            nSum+=i;
        }
        
    }
    printf("S = %d",nSum);
    return 0;
}