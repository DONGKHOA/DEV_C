#include <stdio.h>

int *initArray(int number)
{
    static int arr[100];
    for (int i = 0; i < number; i++)
    {
        printf("Phan tu thu  %d:  ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

void clearDuplicate(int n, int *pint)
{
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        if (arr[pint[i]] == pint[i])
        {
            continue;
        }
        else
        {
            arr[pint[i]] = pint[i];
            if (i == n - 1)
            {
                printf("%d", arr[pint[i]]);
            }
            else
            {
                printf("%d, ", arr[pint[i]]);
            }
        }
    }
}

int main()
{
    int n;
    int *pint;
    printf("Input array: ");
    scanf("%d", &n);
    pint = initArray(n);

    printf("Result : [");
    clearDuplicate(n, pint);
    printf("]");
    return 0;
}