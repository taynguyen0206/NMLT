#include <iostream>
using namespace std;

void nhap(int a[][100], int &m, int &n);
void timmax(int a[][100], int m, int n);
void xuat(int a[][100], int m, int n);

int main(){
	int a[100][100], m,n;
	nhap(a,m,n);
	xuat(a,m,n);
	cout << endl;
	timmax(a,m,n);
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

void timmax(int a[][100], int m, int n){
	int max = a[0][0];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == max){
				cout << "a[" << i << "]" << "[" << j << "]";
			}
		}
		cout << endl;
	}
	
}
