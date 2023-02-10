#include <stdio.h>

void ENTER(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void SWAP(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SELECTION_sort(int *arr, int n)
{
	int max;//position of the max element in the current range
	for(int i=0; i<n-1; i++){
		max = i;
		for(int j=i+1; j<n; j++){
			if (arr[j] > arr[max]){
				max = j;// update position of the max element in array
			}
		}
		SWAP(&arr[max], &arr[i]);
	}
    
}
void DISPLAY_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    
}

int main()
{
    int n;  printf("Enter size: ");    scanf("%d",&n);
    int arr[1000]; printf("Enter array: ");
    ENTER(arr, n);
    SELECTION_sort(arr, n);
    DISPLAY_array(arr, n);
    return 0;
}