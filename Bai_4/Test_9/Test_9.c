#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
}
void sort(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                int temporary = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temporary;
            }
            
        }
        
    }
    
}
void number(int *arr,int n)
{
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i+1] == arr[i])
        {
            count++;
        }
        else
        {
            printf("%d appear %d time\n",arr[i],count);
            count = 1;
        }
        
    }
    
}
int main()
{
    int n;  printf("Enter n: ");    scanf("%d",&n);
    int arr[n];     Enter(arr,n);
    number(arr,n);
    return 0; 
}