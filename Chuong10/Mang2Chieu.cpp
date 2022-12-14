#include <iostream>
using namespace std;

void nhap(int a[][100], int &m, int &n);
void xuat(int a[][100], int m, int n);
int tong_mang(int a[][100], int m, int n);
int tong_dong(int a[][100], int c[100], int m, int n, int &k);
void xuat_mang(int a[], int n);


int main(){
	int a[100][100], c[100], m,n,k;
	nhap(a,m,n);
	xuat(a,m,n);
	cout << endl;
	tong_dong(a,c,m,n,k);
	xuat_mang(c,k);
	return 0;
}


void nhap(int a[][100], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}


void xuat(int a[][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int tong_mang(int a[][100], int m, int n){
	int tong = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			tong += a[i][j];
		}
	}
	return tong;
}

/*
m = 3, n = 3
1 2 3
4 5 6
7 8 9

*/

int tong_dong(int a[][100], int c[100], int m, int n, int &k){
	k = 0;
	for(int i = 0; i < m; i++){
		int tong = 0;
		for(int j = 0; j < n; j++){
			tong+= a[i][j];
		}
		c[k++] = tong;
	}
}

void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}




