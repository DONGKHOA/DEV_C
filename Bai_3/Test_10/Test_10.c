#include<stdio.h>

float number(int  n)
{
    float count = 0;
    while (n!=0)
    {
        count ++;
        n/=10;
    }
    return count;
}
void odd_number(int n)
{
    int count = 0;
    while (n!=0)
    {
        int i = n%10;
        if(i%2==1)
        {
            count ++;
        }
        n/=10;
    }
    printf("%d\n",count);
    
}
void average(int n)
{
    int sum = 0;
    int m = n;
    while (n!=0)
    {
        int i = n%10;
        sum+=i;
        n/=10;
    }
    float average = sum /number(m) ;
    printf("%f\n",average);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%f\n",number(n));
    odd_number(n);
    average(n);
    printf("0");
    return 0;
}