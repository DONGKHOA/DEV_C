//          LINEAR SEARCH

#include <stdio.h>
#define length 5


int* enter()
{
    static int arr[length];
    for (int  i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}
void display(const int arr[])
{
    for (int  i = 0; i < length; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
int linear_search(const int arr[], int x)
{
    for (int  i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
        return 0;
    }
    
}
int search_x(int* arr, int x)
{
    int count = 0;
    for (int  i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            count ++;
        }
        
    }
    return count;
}
int main()
{
    int* arr;
    arr = enter();
    display(arr);
    
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    printf("so lan lap x: %d\n",search_x(arr,x));
    if (linear_search(arr,x))
    {
        printf("ton tai x");
    }
    else
    {
        printf("khong ton tai x");
    }
    
    return 0;
}