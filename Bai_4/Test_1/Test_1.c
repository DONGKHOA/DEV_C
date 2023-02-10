#include <stdio.h>

void enter(int *arr,int n)
{
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void max_min(int *arr,int n)
{
    int max = arr[0];    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]< min)
        {
            min = arr[i];
        }
        if (arr[i]> max)
        {
            max = arr[i];
        }
    }
    
    printf("MAX = %d\n",max);  
    printf("MIN = %d\n",min);
}
int main ()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    max_min(arr,n);
    return 0;
}