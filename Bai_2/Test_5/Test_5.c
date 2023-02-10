#include<stdio.h>

void Sum(int n)
{
    int nSum = 0, nMul = 1;
    for (int i = 1; i <=n; i++)
    {
        nMul*=i;
        nSum+=nMul;
    }
    printf("S = %d",nSum);
}
int main()
{
    int n;
    do
    {
        printf("Enter the positive integer: ");
        scanf("%d",&n);
    } while (n<=0);
    Sum(n);
    return 0;
}