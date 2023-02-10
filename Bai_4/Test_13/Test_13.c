#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
}
void Delete(int *arr,int n, int k)
{
    for (int i = k; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
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
    int arr[n];
    Enter(arr,n);
    Delete(arr,n,k);
    return 0;
}