#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;

void nhap(int a[], int &n);
int tim_chan(int a[], int n);
int xuly(int a[], int n);
void xuat(int kq);

int main(){
	int a[MAX];
	int n;
	cin >> n;
	nhap(a,n);
	int kq = xuly(a,n);
	cout << kq;
	return 0;
	
}


void nhap(int a[], int &n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
int tim_chan(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			return i;
		}
	}
	return -1;
}

int xuly(int a[], int n){
	int k = tim_chan(a,n);
	if(k == - 1){
		return -1;
	}
	else{
		for(int i = k + 1; i < n; i++){
			if(a[i] % 2 == 0 && a[i] < a[k]){
				k = i;
			}
		}
		return a[k];
	}
}

void xuat(int kq){
	cout << kq;
}


