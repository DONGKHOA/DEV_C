#include"stdio.h"

void Nhapmang(float a[],int n)
{
	for(int i=0;i<n;i++){
		printf("Nhap a[%d] : ",i);
		scanf("%f",&a[i]);
	}
}
void Xuatmang(float a[],int n)
{
	printf("Mang :");
	for(int i=0;i<n;i++)
	{
		printf(" %8.3f ",a[i]);
	}
}
void TinhTongDuong(float a[],int n)
{	
	float S1=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			S1=S1+a[i];
		}
	}
}
int  Tinhtongduong(float a[],int n)
{	
	float S1=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			S1=S1+a[i];
		}
	}
	return S1;
}
int Tinhtongam(float a[],int n)
{	
	float S2=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			S2=S2+a[i];
		}
	}
	return S2;
}
/*int Ham_mu(float a[],int n)
{	
	float Fact=1;
	for(int j=0;j<n;j++)
	{
		for(int i=n-j;i>0;i--)
		{
		Fact=Fact*a[j];
		}
	}
	
	return Fact;
}*/
long int Ham_giaithua(int n)
{	
	int P=1;
	if(n==0)
	{	
		return 1;
	}
	else
	{	
		for(int i=n;i>0;i--)
	{
		P=P*i;
	}	
	return P;
	}
	
}
int main()
{	
	int n;
	INPUT_ARR: 
	printf("Nhap so phan tu mang : "); scanf("%d",&n);
	if(n>50 || n<0) goto INPUT_ARR;
	float a[n],P1=0,P2=0,P;
	Nhapmang(a,n);
	Xuatmang(a,n);
	P1 =Tinhtongduong(a,n);
	P2 =Tinhtongam(a,n);
	P=P2/P1;
	printf("\nTong am chia tong duong la : %.2f",P);
	float S=0;
	
	for(int i=0;i<n;i++)
	{
		float W=1;
		for(int j=n-i;j>0;j++)
		{	
			W=W*a[i];
		}
		S=S+W/Ham_giaithua(i);
	}
	printf("\n Tong chuoi : %f",S);
	return 0;
}
