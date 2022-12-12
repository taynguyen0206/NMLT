#include<iostream>
using namespace std;

void nhap( int a[], int &n);
int UCLN(int a, int b);
int xuly(int a[], int n);
void xuat(int kq);
z
int main(){
	int a[100], n;
	nhap(a,n);
	int kq = xuly(a,n);
	xuat(kq);
}

void nhap( int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int UCLN(int a, int b){
	if (a<0){
		a=-a;
	}
	if (b<0){
		b=-b;
	}
	while (a*b!=0)
	{
		if (a>b){
			a%=b;
		}
		else{
			b%=a;
		}
	}
	return a+b;
}

int xuly(int a[], int n){
	int ucln = a[0];
	for(int i = 1; i < n; i++){
		ucln = UCLN(ucln, a[i]);
	}
	return ucln;
}

void xuat(int kq){
	cout << kq;
}
