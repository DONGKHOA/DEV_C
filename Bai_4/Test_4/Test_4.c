#include <stdio.h>

void Enter(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int search_x(int *arr,int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    int n, x;
    printf("Enter n: ");    scanf("%d",&n);
    printf("Enter x: ");    scanf("%d",&x);
    int arr[n];     Enter(arr,n);
    printf("So lan xuat hien: %d",search_x(arr,n,x));
    return 0;
}