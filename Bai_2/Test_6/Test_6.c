#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the natural number n: ");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        if (n%i ==0)
        {
            printf("%d, ",i);
            count+=1;
        }
    }
    printf("\n");
    printf("S = %d",count);
    return 0;
}