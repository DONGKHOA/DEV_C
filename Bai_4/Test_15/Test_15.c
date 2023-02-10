#include <stdio.h>

void Enter(int *arr1,int *arr2, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("Arr1[%d] = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("Arr2[%d] = ",i);
        scanf("%d",&arr2[i]);
    }
    
}
int Insert(int *arr1, int *arr2, int n, int m, int k)
{
    for (int i = m + n -1; i >= k+m; i--)
    {
        arr1[i] = arr1[i-k];
    }
    for (int i = k; i < k+m; i++)
    {
        arr1[i] = arr2[i - k];
    }
    for (int i = 0; i < m+n; i++)
    {
        printf("%d\t",arr1[i]);
    }
    
}
int main()
{
    int n, m; printf("Enter n, m: ");    scanf("%d%d",&n,&m);
    int k;  printf("Enter k: ");    scanf("%d",&k);
    int arr1[m+n];
    int arr2[m];
    Enter(arr1, arr2, n, m);
    Insert(arr1, arr2, n, m, k);
    return 0;
}