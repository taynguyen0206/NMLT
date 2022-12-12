#include <iostream>
using namespace std;
#define MAX 200

void nhapMang(int A[], int &m);
void xuat(int kq);
int xuly(int A[], int B[], int m, int n);

int main()
{
	int a[MAX], b[MAX], m, n;
	nhapMang(a,m);
	nhapMang(b,n);
	int kq=xuly(a,b,m,n);
	xuat(kq);
	return 0;
}

void nhapMang(int a[], int &m)
{
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> a[i];
	} 
}

void xuat(int kq)
{
	cout << kq;
}

int xuly(int a[], int b[], int m, int n)
{
	int count = m;				
	for (int i = 0 ; i < m ; i++)
	{
		int flag=1;			
		for (int j = 0 ; j < n ; j++)
			if (b[j] == a[i])		
			{
				count--;	
				flag=0;		
			}
		if (flag==1)
		{
		count++;	
		}
	return count;
	}
}
