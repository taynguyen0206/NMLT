#include<iostream>
using namespace std;

void nhap(int a[], int &n);
int am_dau(int a[], int n);
int xuly(int a[], int n);
void xuat(int kq);

int main(){
	int a[100], n;
	nhap(a,n);
	int kq = xuly(a,n);
	xuat(kq);
	return 0;
}

void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int am_dau(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			return i;
		}
	}
	return -1;
}

int xuly(int a[], int n){
	int k = am_dau(a,n);
	if(k == n - 1){
		return -1;
	}else{
		for(int i = k + 1; i < n; i++){
			if(a[i] < 0 && a[i] > a[k]){
				k = i;
			}
		}
		return k;
	}
}

void xuat(int kq){
	cout << kq;
}
