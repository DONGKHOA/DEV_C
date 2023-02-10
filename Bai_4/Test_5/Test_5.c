#include <stdio.h>
#include <math.h>

void Enter(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int Sub_min(int *arr,int n, int x)
{
    int sub = abs(arr[0]-x);
    for (int  i = 1; i < n; i++)
    {
        if (abs(arr[i]-x) < sub)
        {
            sub = abs(arr[i]-x);
        }
        
    }
    return sub;
}
void display(int *arr,int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i]-x) == Sub_min(arr, n, x))
        {
            printf("%5d",arr[i]);
        }
        
    }
    
}
int main()
{
    int n, x;
    printf("Enter n: ");    scanf("%d",&n);
    printf("Enter x: ");    scanf("%d",&x);
    int arr[n];     Enter(arr,n);
    display(arr, n, x);
    return 0;
}