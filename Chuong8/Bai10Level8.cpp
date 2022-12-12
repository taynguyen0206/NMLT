#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;

int sohoanthien(int n);
void nhap(int a[], int &n);
int HoanThienDau(int a[],int n);
int HoanThienNhoNhat(int a[],int n);
void xuat(int kq);

int main(){
	int a[MAX];
	int n;
	cin >> n;
	nhap(a,n);
	int kq = HoanThienNhoNhat(a,n);
	cout << kq;
	return 0;
	
}

int sohoanthien(int n)
{
    int tong=0;
    for (int i=1 ; i<n; i++)
        if(n%i==0)
            tong = tong + i;
    if (tong == n)
       return 1;
    return 0;
}
void nhap(int a[], int &n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int HoanThienDau(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(sohoanthien(a[i])==1)
		{
			return a[i];
		}
	}
	return 0;
}

int HoanThienNhoNhat(int a[],int n)
{
	int k=HoanThienDau(a,n);
	if(k==0)
	{
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(sohoanthien(a[i])==1 && a[i]<k)
		{
			k=a[i];
		}
	}
	return k;
}

void xuat(int kq){
	cout << kq;
}


