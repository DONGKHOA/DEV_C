#include <stdio.h>
#include <math.h>

void Enter(double *arr, double *brr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%lf",&arr[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("brr[%d] = ",i);
        scanf("%lf",&brr[i]);
    }
}
void Value(double *arr, double *brr, int n, double x)
{
    double sum = 0;
    for (int i = n; i >= 0; i--)
    {
        sum+=arr[i]*pow(x, i);
    }
    for (int i = n; i >= 0; i--)
    {
        sum+=brr[i]*pow(x, i);
    }
    printf("P = %0.4lf",sum);
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    double x;  printf("Enter x: ");    scanf("%lf",&x);
    double arr[n], brr[n];
    Enter(arr, brr, n);
    Value(arr, brr, n, x);
    return 0;
}