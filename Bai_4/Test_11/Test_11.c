#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool Condition(int *arr,int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return false;
        }
        
    }
    return true;
}
void Enter_Display(int *arr,int n)
{
    srand(time(NULL));
    int i = 0;
    while (i < n)
    {
        int x = rand();
        if (Condition(arr,i,x))
        {
            arr[i] = x;
            printf("Arr[%d] = %d\n",i,arr[i]);
            i++;
        }
        
    }
    
}
int main()
{
    int n;
    do
    {
        printf("Enter n > 0:");
        scanf("%d",&n);
    } while (n<=0);
    int arr[n];
    Enter_Display(arr,n);
    return 0;
}