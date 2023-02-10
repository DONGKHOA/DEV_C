#include <stdio.h>
#include <math.h>

int FACTORIAL(int a)
{
    int gt = 1;
    for (int i = 1; i <= a; i++)
    {
        gt*=i;
    }
    return gt;
}
int main()
{
    int n = 10;
    float sum  = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += (pow(2,i)/(float)FACTORIAL(i));
    }
    printf("%f",sum);
    return 0;
}
