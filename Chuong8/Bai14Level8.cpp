#include<iostream>
using namespace std;

void nhap(float a[], int &n);
void xuly(float a[], int n, int &max, int &min);
void xuat(float a[], int max, int min);

int main(){
	float a[200];
	int n, max, min;
	nhap(a,n);
	xuly(a,n,max,min);
	xuat(a,max,min);
	return 0;
}

void nhap(float a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void xuly(float a[], int n, int &max, int &min){
	max = min = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > a[max]){
			max = i;
		}else if(a[i] < a[min]){
			min = i;
		}
	}
}

void xuat(float a[], int max, int min){
	cout << "[" << a[min] << "," << a[max] << "]";
}
