#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
}
void Sort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; j > i; j--)
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
int Position(int *arr, int n, int x)
{
    int i = 0;
    while (i < n-1)
    {
        if ((arr[i] < x && x < arr[i+1]) || (arr[i] <= x && x < arr[i+1]))
        {
            return i+1;
            break;
        }
        i++;
    }
    
}
void Insert(int *arr, int n, int x)
{
    printf("Original array: ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
    Sort(arr,n);
    printf("Array after sorting ascending: ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
    int Pos = Position(arr,n,x);
    for (int i = n-1; i > Pos ; i--)
    {
        arr[i] = arr[i-1];
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    arr[Pos] = x;
    printf("Array after inserting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    
}
int main()
{
    int n, k, x;   printf("Enter n: "); scanf("%d",&n);
    printf("Enter x: ");    scanf("%d",&x);
    int arr[n];
    Enter(arr,n);
    Insert(arr,n,x);
    return 0;
}