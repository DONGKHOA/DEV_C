#include<stdio.h>

int main()
{
    int n,i,b,a=0;
    printf("Enter n: ");
    scanf("%d",&n);
    b=n;
    while (n!=0)
    {
        i=n%10;
        a+=i;
        a*=10;
        n/=10;
    }
    a/=10;
    if (a==b)
    {
        printf("So thuan nghich");
    }
    else
    {
        printf("Khong la so thuan nghich");
    }
    return 0;
}