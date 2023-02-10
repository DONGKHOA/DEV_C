#include <stdio.h>
#include <math.h>

void Input_array(int *, int);
void Output_array(int *, int);
int Check_primes(int );
void Sub_array(int *, int);

int main()
{
	int n;
	printf("Input n: ");	scanf("%d",&n);
	int arr[100];
	printf("Input array: ");
	Input_array(arr, n);
	Output_array(arr, n);
	printf("\n");
	Sub_array(arr, n);
	return 0;
}

void Input_array(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void Output_array(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%5d",arr[i]);
	}
}

int Check_primes(int a)
{
	if(a < 2)
	{
		return 0;
	}
	else
	{
		int i;
		for(i = 2; i <= sqrt(a); i++)
		{
			if(a % i == 0) return 0;
		}
		return 1;
	}
}

void Sub_array(int *arr, int n)
{
	int i, count = 0;
	int a[100] = {0};
	for(i = 0; i < n; i++)
	{
		if(Check_primes(arr[i]))
		{
			count++;
			if(count > 1)
			{
				if(arr[i-1] > arr[i])
				{
					a[i + 1 - count] = count;
				}
				else
				{
					count = 0;
				}
			}
		}
		else
		{
			count = 0;
		}
	}
	int min = a[0], cond = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] != 0 && cond == 0)
		{
			cond = 1;
			min = a[i];
		}
		if(cond)
		{
			if(a[i] < min && a[i] != 0)
			{
				min = a[i];	
			}
		}
	}
	int j;
	for(i = 0;i < n; i++)
	{
		if(a[i] == min)
		{
			for(j = i; j < (i + min); j++)
			{
				printf("%5d",arr[j]);
			}
			printf("\n");	
		}
	}
}
