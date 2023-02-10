#include<stdio.h>

int main()
{
    int n;
    printf("Enter the natural number n: ");
    scanf("%d",&n);
    float nSum = 0;
    for (int i = 1; i <=n; i++)
    {
        float a= (float) 1/i;
        nSum+=a;
    }
    printf("S = %f",nSum);
    return 0;
}