#include<stdio.h>
int main()
{
    int a, b;
    printf("Nhap hai so nguyen a va b: \n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a lon hon b");
    }
    if(a<b){
        printf("a nho hon b");
    }
    if(a==b){
        printf("a bang b");
    }
    return 0;
}