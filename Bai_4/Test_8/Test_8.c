#include <stdio.h>
#include <stdbool.h>

void Enter(int *arr,int n)
{
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
bool Symmetrical_array(int *arr, int n)
{
    int mid = n/2;
    for (int i = 0; i < mid; i++)
    {
        if (arr[n-1-i] != arr[i])
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[n];     Enter(arr,n);
    if (Symmetrical_array(arr,n))
    {
        printf("Mang doi xung");
    }
    else
    {
        printf("Mang khong doi xung");
    }
    return 0;
}