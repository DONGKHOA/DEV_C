#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Nhap vao a, b, c, d: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b && b==c && c==d){
        printf("Khong co gia tri max");
    }
    else{
        int max = ( a > b ) ? a : b;
        max = ( max > c ) ? max : c;
        max = ( max > d ) ? max : d;
        printf("Gia tri lon nhat la: %d",max);
    }
    return 0;
}