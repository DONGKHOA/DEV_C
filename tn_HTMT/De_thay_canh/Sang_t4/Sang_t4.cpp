#include <stdio.h>

void Input_array(int *, int );
void sort(int *, int);
int pow(int , int);

//typedef long long ll;
#define ll long long
ll giaithua(int a);
int main()
{
	int n, a[100];
	do{
		printf("Input n: ");
		scanf("%d", &n);
	} while(n<= 0 || n >=100);
	Input_array(a, n);
	sort(a, n);
	float S=0,s=0;
	for (int i = 0; i < n; i++)
    {
    	for(int k=0;k<=i;k++)
    	{
    		s+=a[k];
		}
		S+=pow(s,i)/giaithua(i);
		s=0;
    }
    printf("%f",S);
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

void bubble_sort(int *arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = n - 2; j >= i; j--)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sort(int *arr, int n)
{
	int b[100], position = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > 0)
		{
			b[position] = arr[i];
			position++;
		}
	}
	bubble_sort(b, position);
	position = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > 0)
		{
			arr[i] = b[position];
			position++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
}

int pow(int a, int n)
{
	int mu = 1;
	if(n == 0) return mu;
	else
	for(int i = 1; i <= n; i++)
	{
		mu *=a;
	}
	return mu;
}
ll giaithua(int a)
{
	ll gt = 1;
	for(int i = 1; i <= a; i++)
	{
		gt *=i;
	}
	return gt;
}
