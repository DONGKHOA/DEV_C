#include<stdio.h>

void Uoc_chung_lon_nhat(int a, int b)
{
    int s;
    for (int i = 1; i <=((a<b) ? a:b); i++)
    {
        if (a%i ==0 && b%i==0)
        {
            s = i;
        }
    }
    printf("UCLN: %d\n",s);
}
void Boi_chung_nho_nhat(int a, int b)
{
    int  s= a*b;
    int i;
    for ( i = 1; i <=s; i++)
    {
        if (i%a==0 && i%b==0 )
        {
            break;
        }
    }
    printf("BCNN: %d\n",i);
}

int main()
{
    int a,b;
    printf("Enter the number a,b > 0 : ");
    scanf("%d%d",&a,&b);
    if (a==0 && b==0)
    {
        printf("Khong co UCLN va BCNN ");
    }
    else if (a==0 || b==0)
    {
        printf("Khong co BCNN,UCLN =%d",(a==0)?b:a);
    }
    else
    {
        Uoc_chung_lon_nhat(a,b);
        Boi_chung_nho_nhat(a,b); 
    }
    return 0;
}