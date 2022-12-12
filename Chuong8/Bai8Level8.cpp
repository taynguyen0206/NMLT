#include<iostream>
using namespace std;

void nhap(int a[], int &n);
int xuly(int a[], int n);
void xuat(int kq);

int main(){
	int a[100];
	int n;
	cin >> n;
	nhap(a,n);
	int kq = xuly(a,n);
	xuat(kq);
	return 0;	
}

void nhap(int a[], int &n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

/*
n = 6
3 5 -7 -9 -2 1
==> -2
*/

int xuly(int a[], int n){
	int max = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			max = a[i];
			break;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] < 0 && a[i] > max){
			max = a[i];
		} 
	}
	return max;
}

void xuat(int kq){
	cout << kq;
}
