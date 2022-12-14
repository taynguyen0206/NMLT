#include <iostream>
using namespace std;

void nhap(int a[][100], int &m, int &n);
void xuat(int a[][100], int m, int n);
void swap(int &a, int&b);
void sapxep(int a[][100], int m, int n);


int main(){
	int a[100][100], m , n;
	nhap(a,m,n);
	xuat(a,m,n);
	cout << endl;
	sapxep(a,m,n);
	xuat(a,m,n);
	
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

void swap(int &a, int&b){
	int temp = a;
	a = b;
	b = temp;
}
/*
m = 3 , n = 3
1 2 3 				i,j = 0
4 5 6				i,j = 1
7 8 9				i,j = 2


4 6 9				a[0][0]
3 2 8				a[1][1]
1 4 1				a[2][2]

*/
void sapxep(int a[][100], int m, int n){
	for(int i = 0; i < m - 1; i++){
		for(int flag = i + 1; flag < m; flag++){
			if(a[i][i] > a[flag][flag]){
				swap(a[i][i], a[flag][flag]);
			}
		}
	}
}
