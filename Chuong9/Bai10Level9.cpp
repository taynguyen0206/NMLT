#include<iostream>
#define MAX 200
using namespace std;


void nhap(int a[], int &m);
void xuat(int a[], int b[], int AA[], int BB[], int m, int n);
void xuly(int a[], int b[], int AA[], int BB[], int m, int n);

int main()
{
    int a[MAX], b[MAX], AA[MAX], BB[MAX];
    int m, n;
    nhap(a, m);
    nhap(b, n);
    xuly(a, b, AA, BB, m, n);
    xuat(a, b, AA, BB, m, n);
    return 0;
}

void nhap(int a[], int &m)
{
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
}

void xuat(int a[], int b[], int AA[], int BB[], int m, int n)
{
    for (int i = 0; i < m; i++){
        if (AA[i]){
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++){
        if(BB[i]){
            cout << b[i] << " ";
        }
    }
}

void xuly(int a[], int b[], int AA[], int BB[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        AA[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        BB[i] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((b[j] == a[i]) && (AA[i] == 1))
            {
                AA[i] = 0;
                BB[j] = 0;
            }
        }
    }
}
