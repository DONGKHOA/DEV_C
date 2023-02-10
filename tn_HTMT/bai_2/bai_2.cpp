#include <stdio.h>
#include <math.h>

void Input_array(int *, int);
void Output_array(int *, int);
int Check_primes(int);
void Max_primes_sub_array(int *,int);

int main ()
{
	int n;
	printf("Input n: ");	scanf("%d",&n);
	int arr[100];
	printf("Input array: ");
	Input_array(arr, n);
	Output_array(arr, n);
	printf("\n");
	Max_primes_sub_array(arr, n);
	return 0;
}

void Input_array(int *arr,int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void Output_array(int *arr,int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%5d ", arr[i]);
	}
}

int Check_primes(int n)
{
	if(n < 2)
	{
		return 0;
	}
	else
	{
		int i;
		for(i = 2; i < sqrt(n); i++)
		{
			if(n % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}

void Max_primes_sub_array(int *arr,int n)
{
	int i, max_primes = 0;
	for(i = 0; i < n; i++)
	{
		if(Check_primes(arr[i]))
		{
			if(arr[i] > max_primes)
			{
				max_primes = arr[i];
			}
		}
		else
		{
			if(max_primes != 0)
			{
				printf("%d, ",max_primes);
				max_primes = 0;
			}
		}
	}
}
