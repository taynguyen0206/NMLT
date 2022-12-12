#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;

bool snt(int n);
void nhap(int a[], int &n);
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

bool snt(int n)
{
	if (n < 2){
		return false;
	}		
	
	for (int i = 2; i < (n - 1); i++){
		if (n % i == 0){
			return false;
		}	
	}
	
	return true;
}

void nhap(int a[], int &n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int xuly(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if((snt(a[i])==true) && a[i] > flag){
			flag = a[i];
		}
	}
	return flag;
}

void xuat(int kq){
	cout << kq;
}


