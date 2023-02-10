#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void initMatrix(float *matrix,int n) {
	float k;
	for (int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			printf("Enter matrix[%d][%d]: ", i,j);
			scanf("%f", &k);
			*(matrix + i*n + j) = k;
		}
	}
}
 
void outputMatrix(float *matrix, int n) {
	printf("\n");
	for (int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			printf("%.2f\t", *(matrix + i*n +j));
		}
		printf("\n");
	}
	printf("\n");
}

float detMatrix(float *matrix, int n) {
//	element: this is element will be added in child determinant
//	innerSol: child determinant
//	basic: elements are first row
//	q : point to new matrix
//	l : browse all elements in parent determinant
//	i : browse all elements in fisrt row
//	m: new size of child matrix
//	j,k: check to delete elements that shouldn't add to child matrix

	float ans = 0, basic, element, *q, innerSol;
	int i, l , m, j, k, sign = 1;
	q = (float *)malloc((n-1)*(n-1) * sizeof(float));
	
	if (n == 1 || n == 2) {
		if (n == 1) {
			return ans = *matrix;
		} else {
			float a,b,c,d;
			a = *matrix;
			b = *(matrix + 1);
			c = *(matrix + 2);
			d = *(matrix + 3);
			return ans = a*d - b*c;
		}
	}
	
	for (i = 0; i < n ; i++) {
		basic = matrix[i];
		l = 0;
		m = 0;
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				element = matrix[l];
				if(j == 0|| k == i) {
					
				} else {
					q[m] = element;
					m += 1;
				}
				l += 1;
			}
		}
		
		innerSol = sign*basic*detMatrix(q, n-1);
		ans = ans + innerSol;
		sign = -1*sign;
	}
	return ans;
}

int main() {
	int n;
	float det;
	float *matrix;
	
	printf("Chon cap ma tran: ");
	scanf("%d", &n);
	matrix = (float *)malloc(n * n * sizeof(float));
	
	initMatrix(matrix, n);
	outputMatrix(matrix, n);
	
	//calculate
	det = detMatrix(matrix, n);
	printf("Result: %.2f", det);
	
	
	//clear memory
	free(matrix);
	getch();
	return 0;
}