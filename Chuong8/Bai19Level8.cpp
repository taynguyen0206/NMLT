#include<iostream>
#define MAX 200
using namespace std;

void nhap(int a[], int &n);
void tronmang(int a[], int b[], int c[], int n, int &nC);
void xuat(int a[], int n);

int main(){
	int a[MAX], b[MAX], c[2*MAX];
	int n, nC;
	nhap(a,n);
	nhap(b,n);
	tronmang(a,b,c,n,nC);
	xuat(c,nC);
	return 0;
}

/*
n = 4
1 3 5 7
2 4 6 8
1 2 3 4 5 6 7 8
*/

void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

void tronmang(int a[], int b[], int c[], int n, int &nC){
	int ia = 0, ib = 0, i = 0;
	nC = n + n;
	
	while(ia < n && ib < n)
	{
		while((a[ia] <= b[ib]) && (ia < n))
		{
			c[i] = a[ia];
			i++;
			ia++;
		}
		while((b[ib] <= a[ia]) && (ib < n))
		{
			c[i] = b[ib];
			i++;
			ib++;
		}	
	}
	if (ia < n){
		for (int j=i;j<nC;j++)
		{	
			c[j]=a[ia];
			a++;
		}
	}
	else{
		for (int j=i;j<nC;j++)
		{
			c[j]=b[ib];
			b++;
		}
	}
}
