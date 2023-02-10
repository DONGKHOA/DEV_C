#include <stdio.h>

void ENTER(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void SWAP(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BUBBLE_sort(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = n - 2; j >= i; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                SWAP(&arr[j], &arr[j + 1]);
            }
            
        }
        
    }
    
}
void DISPLAY_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    
}

int main()
{
    int n;  printf("Enter size: ");    scanf("%d",&n);
    int arr[1000]; printf("Enter array: ");
    ENTER(arr, n);
    BUBBLE_sort(arr, n);
    DISPLAY_array(arr, n);
    return 0;
}