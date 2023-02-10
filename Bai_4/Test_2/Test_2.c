#include <stdio.h>

void Enter(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void Min2_Max2(int *arr, int n)
{
    int max = arr[0];   int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    int min2 = max;   int max2 = min;
    for (int  i = 1; i < n; i++)
    {
        if (arr[i] < min2 && arr[i]!=min)
        {
            min2 = arr[i];
        }
        if (arr[i] > max2 && arr[i]!=max)
        {
            max2 = arr[i];
        }
        
    }
    if (min2 == max2 || (min == min2 || max == max2))
    {
        printf("Khong ton tai gia tri thoa man");
    }
    else
    {
        printf("Min2 = %d\n",min2);
        printf("Max2 = %d\n",max2);
    }
    
}
int main()
{
    int n;
    do
    {
        printf("Enter n >= 4: ");
        scanf("%d",&n);
    } while (n<=4);
    int arr[n];
    Enter(arr,n);
    Min2_Max2(arr,n);
    return 0;
}