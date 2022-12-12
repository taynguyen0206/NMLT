#include<iostream>
using namespace std;

void nhap(int a[], int &n, int &x);
void xuly(int a[], int n, int x);

int main(){
	int a[200], n, x;
	nhap(a,n,x);
	xuly(a,n,x);
	return 0;
	
}

void nhap(int a[], int &n, int &x){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void xuly(int a[], int n, int x){
	int index = -1;
	for(int i = 0; i < n; i++){
		if(a[i] > x){
			index = i;
			break;
		}
	}
	if(index != -1){
		int flag = a[index];
		for(int i = n; i >= index; i--){
			a[i] = a[i-1];
		}
		a[index] = x;
		n++;
	}
	
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

