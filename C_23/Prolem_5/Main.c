#include <stdio.h>

void ENTER_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}
void SOLUTION(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("Sum of array: %d\n", sum);
    printf("Average of array: %f", (sum/(float)n));
}
int main()
{
    int arr[1000], size;
    printf("Enter size array: ");   scanf("%d", &size);
    printf("Enter value array: ");
    ENTER_array(arr, size);
    SOLUTION(arr, size);
    return 0;
}