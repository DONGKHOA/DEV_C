#include <stdio.h>
#include <math.h>
#include <conio.h>

void Input_array(int *, int);
void Output_array(int *, int);
int Check_primes(int);
void Sub_array(int *, int, int, int);

int main()
{
	int n;
	printf("Input n: ");	scanf("%d", &n);
	int arr[100];
	printf("Input array: ");
	Input_array(arr, n);
	Output_array(arr, n);
	int x, y;
	do
	{
		printf("Input X < Y\n");
		printf("Input X: ");	scanf("%d", &x);
		printf("Input Y: ");	scanf("%d", &y);
		Sub_array(arr, n, x, y);	
	} while(x < y);
	getch();
	return 0;
}

void Input_array(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void Output_array(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");
}

int Check_primes(int a)
{
	if(a < 2) return 0;
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

void Sub_array(int *arr, int n, int x, int y)
{
	int s = 0, i, count = 0, position;
	int a[100]= {0};
	for(i = 0; i < n ; i++)
	{
		if(Check_primes(arr[i]))
		{
			s+=arr[i];
			position = i - count;
			count++;
		}
		else
		{
			if((s < x || s > y) && s > 0)
			{
				a[position] = count;
			}
			count = 0;
			s = 0;
		}
	}
	int j, cond = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] != 0)
		{
			for(j = i; j < i + a[i]; j++)
			{
				printf("%5d",arr[j]);
			}
			printf("\n");
			cond++;
		}
	}
	if(cond == 0) printf("Khong co day nao\n");
}