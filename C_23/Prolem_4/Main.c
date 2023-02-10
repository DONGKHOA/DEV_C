#include <stdio.h>

void ENTER_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}
int MAX_value_array(int *arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
}
int MIN_value_array(int *arr, int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}
int main()
{
    int arr[1000], size;
    printf("Enter size array: ");   scanf("%d", &size);
    printf("Enter value array: ");
    ENTER_array(arr, size);
    printf("Max value of array: %d\n", MAX_value_array(arr, size));
    printf("Min value of array: %d", MIN_value_array(arr, size));
    return 0;
}