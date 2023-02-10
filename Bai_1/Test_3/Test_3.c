#include<stdio.h>
int main()
{
    printf("Nhap hai so nguyen a, b:");
    int a, b;
    scanf("%d %d",&a,&b);
    printf("Tong hai so nguyen a va b: a+b=%d \n",a+b);
    printf("Hieu hai so nguyen a va b: a-b=%d \n",a-b);
    printf("Tich hai so nguyen a va b: a*b=%d \n",a*b);
    if(b==0){
        printf("Khong thuc hien duoc phep chia");
    }
    else{
        float div= (float)a/b;
        printf("Phep chia hai so nguyen a va b: a/b=%f \n",div);
    }
    return 0;
}