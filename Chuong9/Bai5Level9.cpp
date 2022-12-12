#include<iostream>
#define MAX 200
using namespace std;

void nhap(float a[] ,int  n);
int xuly(float a[], float b[], int n);
void xuat(float a[], float b[], int n);

int main(){
	float a[MAX], b[MAX], n;
	cin >> n;
	nhap(a,n);
	xuly(a,b,n);
	xuat(a,b,n);
	return 0;
}


void nhap(float a[] ,int  n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int xuly(float a[], float b[], int n){
	for(int i = 0; i < n; i++){
		if( a[i] * a[i -1] < 0 || a[i] * a[i + 1] < 0){
			b[i] = 1;
		}
	}
	return -1;
}

void xuat(float a[], float b[], int n){
	for(int i = 0; i < n; i++){
		if(b[i] == 1){
			cout << a[i] << " ";
		}
	}
}
