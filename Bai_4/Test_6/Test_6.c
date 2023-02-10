#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void Average(int *arr,int n)
{
    int sum_odd = 0;
    int sum_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            sum_even+=arr[i];
        }
        else
        {
            sum_odd+=arr[i];
        }
        
    }
    printf("Sum even number = %d\n",sum_even);
    printf("Sum odd number = %d\n",sum_odd);
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[n];     Enter(arr,n);
    Average(arr,n);
    return 0;
}