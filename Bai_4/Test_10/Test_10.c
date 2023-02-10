#include <stdio.h>

void Enter(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
}
void Sort(int *arr,int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int  j = n-1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                int tempt = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tempt;
            }
            
        }
        
    }
    
}
int Count(int *arr,int n)
{
    Sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
    int count = 1;
    int a = 1;
    printf("Element appear 1 times:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                printf("%d,",arr[i]);
                a = 0;
            }
            count = 1;
        }
        
    }
    if (a)
    {
        printf("No satisfying element!!!");
    }
    
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[n];     Enter(arr,n);
    Count(arr,n);
    return 0;
}