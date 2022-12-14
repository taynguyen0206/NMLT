#include <iostream>
using namespace std;

void nhap(int a[][100], int &m, int &n);
int tong_dong(int a[][100], int c[100], int m, int n, int &k);
int tong_cot(int a[][100], int c[100], int m, int n, int &k_cot);
int tong_cheo_chinh(int a[][100], int m, int n);
int tong_cheo_phu(int a[][100], int m, int n);
void xuat_mang(int a[], int n);

int main(){
	int a[100][100], m, n, k, c[100], k_cot;
	nhap(a,m,n);
	int kq = tong_cheo_phu(a,m,n);
	cout << kq;
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

/*
m = 3 , n = 3
1 2 3 				i,j = 0
4 5 6				i,j = 1
7 8 9				i,j = 2


3 6 9				i = 0, j = 2
2 4 8				i = 1; j = 1
1 4 7				i = 2; j = 0
*/

int tong_cheo_phu(int a[][100], int m, int n){
	int tong_cp = 0;
	for(int i = 0; i < m; i++){
			tong_cp += a[i][n - i - 1];
	}
	return tong_cp;
}


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

int tong_cot(int a[][100], int c[100], int m, int n, int &k_cot){
	k_cot = 0;
	for(int j = 0; j < n; j++){
		int tong_cot = 0;
		for(int i = 0; i < m; i++){
			tong_cot+= a[i][j];
		}
		c[k_cot++] = tong_cot;
	}
}
int tong_cheo_chinh(int a[][100], int m, int n){
	int tong_cc = 0;;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				tong_cc += a[i][j];
			}
		}
	}
	return tong_cc;
}

void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}


