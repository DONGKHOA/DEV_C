#include <stdio.h>

void Enter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = n - 2; j >= i; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            
        }
        
    }
    
}
void DisplayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    
}

int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[1000]; printf("Enter array: ");
    Enter(arr, n);
    BubbleSort(arr, n);
    DisplayArray(arr, n);
    return 0;
}