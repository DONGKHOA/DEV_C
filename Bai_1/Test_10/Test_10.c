#include<stdio.h>
int main()
{
    float a, b, c;
    do
    {
        printf("Nhap ba so thuc khong am a, b, c: ");
        scanf("%d%d%d",&a,&b,&c);
    } while (a<0 && b<0 && c<0);
    if (a+b>c || a+c>b || c+b>a)
    {
        printf("a b c la ba canh cua mot tam giac");
    }
    else
    {
        printf("a b c khong la ba canh cua mot tam giac");
    }
    return 0;
}