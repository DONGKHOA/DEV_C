#include<stdio.h>
int main()
{
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d%d",&a,&b);
    if(a==0){
        printf("Phuong trinh vo nghiem");
    }
    else{
        float x = (float) -b/a;
        printf("Nghiem cua phuong trinh la: %f",x);
    }
    return 0;
}