#include <iostream>
using namespace std;


bool snt(int n);
void nhap(int a[][100], int &m, int &n);
void tim_nt_dau(int a[][100], int m, int n);
void xuat(int a[][100], int m, int n);


int main(){
	int a[100][100], m,n;
	nhap(a,m,n);
	xuat(a,m,n);
	cout << endl;
	tim_nt_dau(a,m,n);
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

void tim_nt_dau(int a[][100], int m, int n){
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(snt(a[i][j])==true)
			{
				cout << i << " " << j << endl;
			}
			break;
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
