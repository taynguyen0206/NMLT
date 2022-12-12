#include<iostream>
using namespace std;

void nhap(int a[], int&n);
void xuat(int a[], int n);
void nhap_i_x(int &i, int &x);
int xoa_pt(int a[], int &n, int i);
int chen_pt(int a[], int &n, int i, int x);

int main(){
	int a[200],n,i,x;
	nhap(a,n);
	nhap_i_x(i,x);
	xuat(a,n);
	cout << endl;
	chen_pt(a,n,i,x);
	xuat(a,n);
	cout << endl;
	xoa_pt(a,n,i);
	xuat(a,n);
	return 0;
}

void nhap(int a[], int&n){
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
void nhap_i_x(int &i, int &x){
	cin >> i >> x;
}

int xoa_pt(int a[], int &n, int i){
	for(int k = i; k < n-1;k++){
		a[k] = a[k+1];
	}
	n--;
}

int chen_pt(int a[], int &n, int i, int x){
	for(int k = n; k >i;k--){
		a[k] = a[k-1];
	}
	a[i+1] = x;
	n++;
}
