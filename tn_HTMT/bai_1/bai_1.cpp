#include <stdio.h>
#include <math.h>

void Input_array(int arr[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

void Output_array(int arr[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    
}

int Check_prime_number(int n)
{
    int i;
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
            
        }
        return 1;
    }
    
}

void Max_min_times(int arr[100], int n)
{
    int max = 0, min = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (Check_prime_number(arr[i]))
        {
            if (min == 0)
            {
                min = arr[i];
                max = arr[i];
            }
            else
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
            
        }
        
    }
    if (min == 0 || max ==0)
    {
        printf("There are no primes in array.");
    }
    else if (min == max && min != 0 && max != 0)
    {
        printf("Only one value primes in array\n");
        int count = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == min)
            {
                count++;
            }
            
        }
        printf("x = y = %d", count);
    }
    else
    {
        int count_min = 0, count_max = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == min)
            {
                count_min++;
            }
            if (arr[i] == max)
            {
                count_max++;
            }
            
        }
        printf("\n x = %d \n y = %d",count_max, count_min);
    }
}

int main()
{
    int arr[100];
    int n;
    printf("Input n: ");    
	scanf("%d",&n);
    printf("Input array: ");
    Input_array(arr, n);
    Output_array(arr, n);
    Max_min_times(arr, n);
    return 0;
}
