#include<iostream>
#include<cmath>
#define MAX 200
using namespace std;

void nhap(int a[] ,int  &n);
int xuly(int a[], int b[], int n);
void xuat(int a[], int b[], int n);

int main(){
	int a[MAX], b[MAX], n;
	nhap(a,n);
	xuly(a,b,n);
	xuat(a,b,n);
	return 0;
}


void nhap(int a[] ,int  &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int xuly(int a[], int b[], int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] > abs(a[i+1])){
			b[i] = 1;
		}
	}
}

void xuat(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(b[i] == 1){
			cout << a[i] << " ";
		}
	}
}
