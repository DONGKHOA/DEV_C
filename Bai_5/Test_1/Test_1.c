#include <stdio.h>
#include <math.h>
#include <conio.h>

void change(int n, int r)
{
    int count = 0;
    int arr[100];
    while (n!=0)
    {
        arr[count] = n%r;
        n/=r;
        count++;
    }
    count--;
    
    int count1 = 0;
    char str[count];
    for (int i = count; i >=0; i--)
    {
        if (arr[i]<10)
        {
            str[count1]= arr[i] + 48;
            count1++;
        }
        else
        {
            str[-count1] = arr[i] + 55;
            count1++;
        }
        
    }
    puts(str);
}
int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    change(n,r);
    return 0;
}