//           BINARY SEARCH


#include <stdio.h>
#define length 5

int enter(int arr[])
{
    for (int  i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void bubble_sort(int arr[])
{
    for (int  i = 0; i < length; i++)
    {
        for (int  j = length-1 ; j >i; j--)
        {
            if (arr[i] < arr[i-1])
            {
                int temporary = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temporary;
            }
            
        }
        
    }
    
}

int binary_search(int arr[], int x)
{
    int left = 0;   int right = length - 1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if (arr[mid] == x)
        {
            return 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        
    }
    return 0;
}

void display(int arr[])
{
    for (int  i = 0; i < length; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[length];
    enter(arr);
    display(arr);
    bubble_sort(arr);
    int x;  printf("Enter x: ");  scanf("%d",&x);
    if (binary_search(arr,x))
    {
        printf("ton tai x");
    }
    else
    {
        printf("khong ton tai x");
    }
    
    return 0;
}