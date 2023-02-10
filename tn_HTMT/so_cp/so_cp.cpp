#include <stdio.h>
#include <conio.h>

void Input_matrix(int matrix[100][100], int, int);
void Output_matrix(int matrix[100][100], int, int);
int checkCP(int);
void col_max_cp(int matrix[100][100], int, int);

int main()
{
	int row, col;
	printf("Enter row: ");	scanf("%d",&row);
	printf("Enter column: ");	scanf("%d",&col);
	int matrix[100][100];
	printf("Input matrix: \n");
	Input_matrix(matrix, row, col);
	Output_matrix(matrix, row, col);
	col_max_cp(matrix, row, col);
	getch();
	return 0;
}

void Input_matrix(int matrix[100][100], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
}

void Output_matrix(int matrix[100][100], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col;j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int checkCP(int a)
{
	for(int i = 0;i*i <= a;i++)
	{
		if(a == i*i)	return 1;
	}
	return 0;
}

void col_max_cp(int matrix[100][100], int row, int col)
{
	int count = 0;
	int a[100] = {0};
	for(int i = 0; i < col; i++)
	{
		for(int j = 0; j < row;j++)
		{
			if(checkCP(matrix[j][i]))
			{
				count++;
				a[i] = count;
			}
		}
		count = 0;
	}
	int max = 0;
	for(int i = 0; i < col; i++)
	{
		if(a[i] > max)	max = a[i];
	}
	if(max == 0) printf("khong co so chinh phuong");
	else
	{
		for(int i = 0; i < col; i++)
		{
			
			if(a[i]==max)
			{
				printf("col %d \n", i);
				for(int j = 0; j < row; j++)
				{
					printf("%d \n",matrix[j][i]);
				}
			}
		}
	}
}
