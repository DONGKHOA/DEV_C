#include <stdio.h>
#include <math.h>

void Enter(double *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%lf",&arr[i]);
    }
    
}
void Value(double *arr, int n, double x)
{
    double sum = 0;
    for (int i = n; i >= 0; i--)
    {
        sum+=arr[i]*pow(x, i);
    }
    printf("P = %0.4lf",sum);
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    double x;  printf("Enter x: ");    scanf("%lf",&x);
    double arr[n];
    Enter(arr,n);
    Value(arr, n, x);
    return 0;
}