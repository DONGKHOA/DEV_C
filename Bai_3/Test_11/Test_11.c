#include<stdio.h>

void check(int n)
{
    int count = 1;
    while (n!=0)
    {
        int i = n%10;
        n/=10;
        if (n%10>i)
        {
            printf("Sap xep khong tang dan\n");
            count--;
            break;
        }
    }
    if (count)
    {
        printf("Sap xep tang dan\n");
    }
    
}
int first(int n)
{
    int i;
    while (n!=0)
    {
        i = n%10;
        n/=10;
    }
    return i;
}
void repeat(int n)
{
    int count = 0;
    int m = n;
    while (n!=0)
    {
        int i = n%10;
        if(i==first(m))
        {
            count++;
        }
        n/=10;
    }
    printf("So lan lap chu so dau tien: %d\n",count-1);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    check(n);
    printf("Chu so dau tien cua n: %d\n",first(n));
    repeat(n);
    return 0;
}