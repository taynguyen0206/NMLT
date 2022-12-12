#include<iostream>
using namespace std;

void nhap(float a[], int &n, float &x);
int xuly(float a[], int n, float x);
void xuat(int kq);

int main(){
	float a[200], x;
	int n;
	nhap(a,n,x);
	int kq = xuly(a,n,x);
	xuat(kq);
	return 0;
}

void nhap(float a[], int &n, float &x){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int xuly(float a[], int n, float x){
	if(x >= 0){
		return -1;
	}
	else{
		for(int i = n - 1; i >= 0; i--){
			if(a[i] < 0 && a[i] > x){
				return a[i];
			}
		}
	}
	return -1;
}
void xuat(int kq){
	cout << kq;
}
