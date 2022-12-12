#include <iostream>
#define M 50
#define N 50
using namespace std;

void nhap(int a[][N], int &m, int &n);
int tong(int a[][N], int m, int n);
void xuat(int kq);

int main()
{
    int a[M][N];
    int m, n;
    nhap(a, m, n);
    int kq = tong(a, m, n);
    xuat(kq);
    return 0;
}

void nhap(int a[][N], int &m, int &n)
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

int tong(int a[][N], int m, int n)
{
    int tong = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong += a[i][j];
        }
    }
    return tong;
}

void xuat(int kq)
{
    cout << kq;
}
