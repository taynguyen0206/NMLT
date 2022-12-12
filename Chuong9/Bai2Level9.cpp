#include <iostream>
#define MAX 200
using namespace std;


void nhapMang(float A[], int n);
void xuatMang(float A[], float C[], int n);
void xuly(float A[], float B[], float C[], int n);

int main()
{
	float A[MAX],B[MAX],C[MAX];
	int n;
	cin >> n;
	nhapMang(A,n);
	nhapMang(B,n);
	xuly(A,B,C,n);
	xuatMang(A,C,n);
	return 0;
}

void nhapMang(float A[], int n)
{
	for (int i = 0 ; i < n ; i++){
		cin >> A[i];
	}
}

void xuatMang(float A[], float C[], int n)
{

	for (int i = 0; i < n ; i++){
		if (C[i]==1){
			cout << A[i] << " ";
		}
	}
}

void xuly(float A[], float B[], float C[], int n)
{
	int i,j;
	for (i = 0 ; i < n ; i++){
		C[i]=1;
	}
	
	for ( i = 0; i < n ; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (A[j]==A[i])
			{
				C[j]=-1;
			}
		}
	}
				
	for ( i = 0 ; i < n ; i++)
	{
		for ( j = 0 ; j < n ; j++)
		{
			if ( (B[j] == A[i]) && C[i]!=-1)
			{
				C[i]=2;
			}
		}
	}
}
