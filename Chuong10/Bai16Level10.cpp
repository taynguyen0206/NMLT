#include <iostream>
using namespace std;

int main(){
	
	
}

void nhap(int A[][N], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
}

/*

m,n = 3
4 3 6				
2 3 7
1 4 9

*/

int xuly(int a[][100], int m, int n){
	int count = 0;
	for(int j = 0; j < n; j++){
		if(a[0][j] % 2 == 0){
			count++;
		}
	}
	
}

void xuat(int kq){
	cout << kq;
}
