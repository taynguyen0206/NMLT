#include <iostream>
#define MAX 200
using namespace std;

void nhap(int a[], int &n);
int xuly(int a[], int b[], int m, int n);
void xuat(int kq);

int main()
{
	int A[MAX],B[MAX];
	int m,n;
	nhap(A,m);
	nhap(B,n);
	int kq=xuly(A,B,m,n);
	xuat(kq);
	return 0;
}

void nhap(int a[], int &n)
{
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

void xuat(int kq)
{
	cout << kq;
}

int xuly(int a[], int b[], int m, int n)
{
	int flag;
	if (m > n)
    {
    	return 0;
    }
	else
	{
		for (int i = 0; i < m; i++)
		{
			flag=0;					
			for (int j = 0; j < n; j++)	
				if (a[i] == b[j])		
				{
					flag = 1;
					break;
				}
			if (flag == 0)			
				return 0;			
		}
		return 1;
	}
}
