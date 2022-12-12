#include<iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int &n);
int tim_max(int a[], int n);
int count_max(int a[], int n, int max);
void xuat(int kq);

int main(){
	int a[MAX], n;
	nhap(a,n);
	int max = tim_max(a,n);
	int kq = count_max(a,n,max);
	xuat(kq);
}

void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int tim_max(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int count_max(int a[], int n, int max){
	int count = 0;
	for(int i = 0; i<n ;i++){
		if(a[i] == max){
			count++;
		}
	}
	return count;
}

void xuat(int kq){
	cout << kq;
}
