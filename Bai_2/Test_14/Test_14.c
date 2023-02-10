#include<stdio.h>

int main()
{
    int n, a=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>0)
    {
        a*=n;
        n--;
    }
    printf("n! = %d",a);
    return 0;
}