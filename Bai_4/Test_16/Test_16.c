#include <stdio.h>

void Enter(int *arr, int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
}
void Display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void Increase(int *arr, int n)
{
    printf("Original array:\n");
    Display(arr, n);
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[n];
    Enter(arr,n);
    Increase(arr,n);
    return 0;
}