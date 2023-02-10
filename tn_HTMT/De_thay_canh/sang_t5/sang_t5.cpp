#include <stdio.h>
#include <math.h>
#include <conio.h>

void Input_array(int *, int);
void Output_array(int *, int);
void Max_even_number(int *, int);
void Sum(int *, int);
int Check_prime(int);
void Average_prime(int *, int);

int main()
{
	int n;
	do
	{
		printf("Input n: ");
		scanf("%d",&n);
	}while(n<=0 && n>60);
	int arr[60];
	printf("Input array: ");
	Input_array(arr, n);
	Output_array(arr, n);
	Max_even_number(arr, n);
	Sum(arr, n);
	Average_prime(arr, n);
	getch();
	return 0;
}

void Input_array(int *arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void Output_array(int *arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");
}

void Sum(int *arr, int n)
{
	float sum = 0;
	int tu = 0, mau = 0;
	for(int i = 0; i < n; i++)
	{
		tu+=pow(-1,i)*arr[i];
		mau+= (i+1);
		sum+=(pow(tu, i+1)/mau);
	}
	printf("Sum = %f \n", sum);
}

void Max_even_number(int *arr, int n)
{
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		if(max == -1 && arr[i]%2==0)	max = arr[i];
		if(arr[i] > max && arr[i]%2==0)	max = arr[i];
	}
	if(max == -1)	printf("No even number in array \n");
	else	printf("Max even number in array: %d \n",max);
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

void Average_prime(int *arr, int n)
{
	float s = 0;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(Check_prime(arr[i]))
		{
			s+=arr[i];
			count++;	
		}
	}
	if(count == 0)	printf("No prime in array\n");
	else
	{
		float aver = s/(float)count;
		printf("Average prime in array = %f \n",aver);	
	}
}
