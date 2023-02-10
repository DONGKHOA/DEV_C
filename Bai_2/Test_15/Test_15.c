#include<stdio.h>

int main()
{
    int n,i,a;
    printf("Enter the integer number n: ");
    scanf("%d",&n);
    while (n!=0)
    {
        i=n%10;
        a+=i;
        n/=10;
    }
    printf("%d",a);
    return 0;
}