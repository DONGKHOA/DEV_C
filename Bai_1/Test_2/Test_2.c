#include<stdio.h>
int main()
{
    printf("Nhap vao so nguyen n: ");
    int n;
    scanf("%d",&n);
    if (n%2==0){
        printf("n la so chan \n");
    }
    else{
        printf("n la so le \n");
    }
    if(n>0){
        printf("n la so duong \n");
    }
    else{
        printf("n la so le \n");
    }
    if(n==0){
        printf("n khong la so chan cung khong la so le \n");
    }
    return 0;
}