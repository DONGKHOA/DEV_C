#include <stdio.h>

void Enter(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void display(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
void increase_decrease_bubble_sort(int *arr, int n)
{
    // INCREASE
    for (int  i = 0; i < n; i++)
    {
        for (int  j = n-1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                int temporary = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temporary;
            }
            
        }
        
    }
    printf("Sap xep tang gian: ");    display(arr,n);
    // DECREASE
    for (int  i = 0; i < n; i++)
    {
        for (int  j = n-1; j > i; j--)
        {
            if (arr[j] > arr[j-1])
            {
                int temporary = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temporary;
            }
            
        }
        
    }
    printf("Sap xep giam gian: ");    display(arr,n);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    Enter(arr,n);   printf("Truoc khi sap xep: ");
    display(arr,n);
    increase_decrease_bubble_sort(arr,n);
    return 0;
}