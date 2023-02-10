#include<stdio.h>

int main()
{
    int n;
    printf("Enter the natural number n: ");
    scanf("%d",&n);
    int nSum = 0;
    for (int i = 1; i <=n; i++)
    {
        nSum+=i;
    }
    printf("S = %d",nSum);
    return 0;
}