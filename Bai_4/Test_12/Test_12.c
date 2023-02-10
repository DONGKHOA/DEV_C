#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
}
void Insert(int *arr,int n, int k, int x)
{
    for (int i = n-1; i > k; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[k] = x;
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    
}
int main()
{
    int n, k, x;   printf("Enter n: "); scanf("%d",&n);
    do
    {
        printf("Enter k (0<=k<n): ");
        scanf("%d",&k);
    } while (k >= n && k < 0);
    printf("Enter x: ");    scanf("%d",&x);
    int arr[n];
    Enter(arr,n);
    Insert(arr,n,k,x);
    return 0;
}