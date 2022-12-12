#include<iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int &n);
void lietke(int a[], int nA, int b[], int c[], int &nB);
int find(int a[], int n, int x);
int demXuatHien(int a[], int n, int x);
void xuat(int b[], int c[], int n);

int main(){
	int a[MAX], b[MAX], c[MAX], nA, nB;
	nhap(a,nA);
	lietke(a,nA,b,c,nB);
	xuat(b,c,nB);
	return 0;
}

void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}


void lietke(int a[], int nA, int b[], int c[], int &nB){
	nB = 0;
	for(int i = 0; i < nA; i++){
		if(find(b,nB,a[i])==false){
			b[nB++] = a[i];
		}
	}
	for(int i = 0; i < nB; i++){
		c[i] = demXuatHien(a,nA,b[i]);
	}
}

int demXuatHien(int a[], int n, int x){
	int dem = 0;
	for(int i = 0; i < n; i++){
	 	if(a[i] == x){
	 		dem++;
		}
	}
	return dem;
}

int find(int a[], int n, int x){
	for(int i = 0; i < n; i++){
	 	if(a[i] == x){
	 		return true;
		 }
	}
	return false;
}

void xuat(int b[], int c[], int n){
	for(int i = 0; i < n; i++){
		cout << b[i] << " : " << c[i] << endl;
	}
}
