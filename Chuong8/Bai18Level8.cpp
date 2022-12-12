#include<iostream>
#define MAX 200
using namespace std;

void nhap(int a[] ,int  &n);
void tron_C(int a[], int b[], int c[], int n, int &nc);
void xuat(int a[], int n);
int main(){
	int a[MAX], b[MAX], c[2*MAX];
	int n, nc;
	nhap(a,n);
	nhap(b,n);
//	xuat(a,n);
//	cout << endl;
//	xuat(b,n);
	tron_C(a,b,c,n,nc);
	xuat(c,nc);
	return 0;
}

void nhap(int a[] ,int  &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}


void tron_C(int a[], int b[], int c[], int n, int &nc){
	int ia = 0;
	int ib = 0;
	nc = 0;
	while(ia <n && ib < n){
		c[nc++] = a[ia++];
		c[nc++] = b[ib++];
	}

}

void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
