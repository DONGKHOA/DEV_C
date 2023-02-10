#include<stdio.h>
#define length 5

int* Enter1()
{
	static int arr[length];
	for (int  i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
	return arr;
}
void Enter(int arr[])
{
	for (int  i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
	
}
void display(const int arr[])	// key "const" makes array to a read - only array
{
	for (int  i = 0; i < length; i++)
	{
		printf("%5d",arr[i]);
	}
	
}
int main()
{
	int arr[length];
	int* b;
	b = Enter1();
	display(b);
	return 0;
}