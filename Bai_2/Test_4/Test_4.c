#include<stdio.h>

int Sum(int n);
int Sum1(int n);
int Sum2(int n);
int main()
{
    int n;
    printf("Enter the natural number n: ");
    scanf("%d",&n);
    printf("S = %d \n",Sum(n));
    printf("S1 = %d \n",Sum1(n));
    printf("S2 = %d \n",Sum2(n));
    return 0;
}
int Sum(int n)
{
    int nSum = 0;
    for (int i = 0; i <= n; i++)
    {
        nSum+=i;
    }
    return nSum;
}
int Sum1(int n)
{
    int nSum = 0;
    for (int i = 1; i <= n; i+=2)
    {
        nSum+=i;
    }
    return nSum;
}
int Sum2(int n)
{
    int nSum=0;
    for (int i = 0; i <= n; i+=2)
    {
        nSum+=i;
    }
    return nSum;
}