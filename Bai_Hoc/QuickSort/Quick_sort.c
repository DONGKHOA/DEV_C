#include <stdio.h>


void swap(int *a, int *b);
int partition(int *arr, int low, int high);
void QuickSort(int *arr, int low, int high);
int main()
{
    int n;  printf("Enter n:");  scanf("%d",&n);
    int arr[1000];
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high)
{
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);

        QuickSort(arr, low, index - 1);
        QuickSort(arr, index + 1, high);
    }
    
}