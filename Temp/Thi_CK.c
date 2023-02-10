#include <stdio.h> 


void nhap(int a[], int n);
void xu_ly(int a[], int n);
int kt_songuyento(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                return 0;
            }
            
        }
        return 1;
    }
    
}
int kt_xuathien(int a[], int k, int q)
{
    for (int i = 0; i < k; i++)
    {
        if (q == a[i])
        {
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    int n;
    do
    {
        printf("Nhap N: ");
        scanf("%d", &n);
    } while (n < 2 || n >1000);
    int a[1000];
    nhap(a,n);
    xu_ly(a, n);
    return 0;
    
}
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}
void xu_ly(int a[], int n)
{
    int count = 0;
    if (kt_songuyento(a[0]))
    {
        count++;
    }
    
    for (int i = 1; i < n; i++)
    {
        if (kt_songuyento(a[i]))
        {
            if (kt_xuathien(a, i, a[i]))
            {
                printf("%d \n", a[i]);
                count++;
            }
            
        }
        
    }
    if (kt_songuyento(a[0]))
    {
        printf("%d \n",a[0]);
    }
    printf("So cac nguyen to: %d", count);
}