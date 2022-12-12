#include<iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int &n);
void danhdau(int a[], int b[], int n);
int tong(int a[], int b[], int n);
void xuat(int kq);

int main(){
	int a[MAX], b[MAX], n;
	nhap(a,n);
	danhdau(a,b,n);
	int kq = tong(a,b,n);
	xuat(kq);
	return 0;
}

void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void danhdau(int a[], int b[], int n){
	for(int i = 0; i < n - 1; i++){
		if((a[i] < a[i-1] && a[i] < a[i+1]) || (a[i] > a[i-1] && a[i] > a[i+1])){
			b[i] = 1;
		}
	}
}

/*
n = 4
3 6 4 8 
-> 6 + 4 = 10
*/

int tong(int a[], int b[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(b[i]==1){
			sum +=a[i];
		}
	}
	return sum;
}

void xuat(int kq){
	cout << kq;
}
