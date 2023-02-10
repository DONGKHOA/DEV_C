#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Input_matrix(int arr[100][100], int, int);
void Output_matrix(int arr[100][100], int, int);
int Check_prime(int);
void Max_multiple_3(int arr[100][100], int, int);
void Element_times(int arr[100][100], int, int);
void Sum_prime(int arr[100][100], int, int);

int main()
{
	int m, n;
	printf("Input row: ");	scanf("%d", &m);
	printf("Input column: ");	scanf("%d", &n);
	int arr[100][100];
	printf("Input matrix: \n");
	Input_matrix(arr, m, n);
	Output_matrix(arr, m, n);
	Max_multiple_3(arr, m, n);
	Element_times(arr, m, n);
	Sum_prime(arr, m, n);
	return 0;
}

void Input_matrix(int arr[100][100], int m, int n)
{
	for(int i = 0; i < m;i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("input Matrix[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void Output_matrix(int arr[100][100], int m, int n)
{
	for(int i = 0; i < m;i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%5d", arr[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
}

void Max_multiple_3(int arr[100][100], int m, int n)
{
	int max = -1, cond = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(cond == 0 && arr[i][j] % 3 == 0)
			{
				max = arr[i][j];
				cond = 1;
			}
			if(arr[i][j] % 3 == 0 && arr[i][j] > max) max = arr[i][j];
		}
	}
	if(max == -1)	printf("khong co boi so cua 3\n");
	else	printf("Boi so lon nhat cua 3 %d\n",max);
}

void Element_times(int arr[100][100], int m, int n)
{
	int *b;
	b = (int *)malloc(m*n*sizeof(int));
	int position = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(i == 0 && j ==0)
			{
				*(b + position) = arr[i][j];
			}
			else
			{
				position++;
				int cond = 1;
				int k = position - 1;
				while (1)
				{
					if(*(b + k) == arr[i][j])
					{
						cond = 0;
						break;
					}
					k--;
					if (k < 0)	break;
				}
				if (cond)
				{
					*(b + position) = arr[i][j];
				}
				else position--;
			}
			
		}
		
	}
	for (int i = 0; i <= position; i++)
	{
		int count = 0;
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (*(b + i) == arr[j][k])
				{
					count++;
				}
				
			}
			
		}
		printf("Element %d appear %d times \n", *(b + i), count);
	}
	free(b);
}

int Check_prime(int a)
{
	if(a < 2) return 0;
	else
	{
		for(int i = 2; i <= sqrt(a); i++)
		{
			if(a%i==0) return 0;
		}
		return 1;
	}
}

void Sum_prime(int arr[100][100], int m, int n)
{
	int s = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(Check_prime(arr[i][j])) s+=arr[i][j];
		}
	}
	printf("Tong so nguyen to = %d \n", s);
}