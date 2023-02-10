#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void sum_Condition(int *arr,int n,int a,int b)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=a && arr[i]<=b)
        {
            sum+= arr[i];
        }
        
    }
    printf("Sum = %d",sum);
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[n];     Enter(arr,n);
    int a,b;    printf("Enter a,b: ");  scanf("%d%d",&a,&b);
    sum_Condition(arr,n,a,b);
    return 0;
}