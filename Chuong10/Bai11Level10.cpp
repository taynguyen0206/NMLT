#include <iostream>
using namespace std;

void nhap(int a[][100], int &m, int &n);
int tong(int a[][100], int b[][100], int c[][100], int m, int n);
void xuat(int a[][100], int m, int n);

int main(){
	int a[100][100], b[100][100], c[100][100];
	int m,n;
	nhap(a,m,n);
	nhap(b,m,n);
	tong(a,b,c,m,n);
	xuat(c,m,n);
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

int tong(int a[][100], int b[][100], int c[][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			c[i][j] = a[i][j] + b[i][j];
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
