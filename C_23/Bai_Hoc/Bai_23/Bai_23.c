//          BUBBLE SORT

#include<stdio.h>
#define length 10

int* enter1()
{
    static int arr[length];
    for (int  i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}
void display(int arr[])
{
    for (int  i = 0; i < length; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
void bubble_sort(int arr[])
{
    for (int  i = 0; i < length; i++)
    {
        for (int  j = length-1; j > i; j--)
        {
            if (arr[j]<arr[j-1])
            {
                int temporary = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temporary;
            }
        }
                
    }

}
int main()
{
    int* arr;
    arr=enter1();
    display(arr);
    bubble_sort(arr);
    display(arr);
    return 0;
}