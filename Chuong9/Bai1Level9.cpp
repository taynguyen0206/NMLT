#include<iostream>
#define MAX 200
using namespace std;



void nhap(int a[], int &n);
void xuat(int a[], int n);
void tach_mang(int a[], int b[], int c[], int n, int &nb, int &nc);

int main(){
	int a[MAX], b[MAX], c[MAX];
	int n, nb, nc;
	nhap(a,n);
	tach_mang(a,b,c,n,nb,nc);
	xuat(b,nb);
	cout << endl;
	xuat(c,nc);
	return 0;
}

void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

void tach_mang(int a[], int b[], int c[], int n, int &nb, int &nc){
	nb = 0, nc = 0;
	for(int i = 0; i < n ;i++)
	{
		if(a[i] >= 0)
		{
			b[nb] = a[i];
			nb++;
		}
		else
		{
			c[nc] = a[i];
			nc++;
		}
	}
}

