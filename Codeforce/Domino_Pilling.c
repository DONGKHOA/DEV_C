#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d%d",&M,&N);
    int arr[] = {1, 2};
    int count = (M*N)/(arr[0]*arr[1]);
    printf("%d",count);
    return 0;
}