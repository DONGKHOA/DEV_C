#include<stdio.h>

int main()
{
    double a;
    printf("Enter a: ");
    scanf("%lf",&a);
    int n = (1/a-1)/2;
    double nSum=0;
    for (int i = 0; i <=n; i++)
    {
        double b=(1/(2*i+1));
        if (i%2==1)
        {
            b=-b;
        }
        nSum+=b;
    }
    printf("%d",nSum);
    return 0;
}