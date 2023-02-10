//      TWO-DIMENSIONAL ARRAY

#include <stdio.h>
#define N 100

void Enter(int arr[N][N], int m, int n)
{
    puts("Enter array elements: ");
    for (int  i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    
}
void display(int arr[N][N], int m, int n )
{
    puts("Array elements: ");
    for (int  i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    
}

# if 1
int main ()
{
    int arr[N][N];
    int m,n;
    puts("Enter the row, column: ");
    scanf("%d%d",&m,&n);
    Enter(arr, m, n);
    display(arr,m ,n);
    return 0;
}
# endif

# if 0
int main()
{
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    int i, j;
    int m = sizeof(arr)/sizeof(int);
    int n = sizeof(arr[0])/sizeof(int); // SO COT
    
    m/=n;   // SO HANG
    display(arr,m,n);
    return 0;
}
#endif 