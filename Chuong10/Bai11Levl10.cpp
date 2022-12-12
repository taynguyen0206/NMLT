#include <iostream>
#define M 50
#define N 50
using namespace std;


void nhap(int a[][N], int b[][N], int &m, int &n);
void tong(int a[][N], int b[][N], int c[][N], int m, int n);
void xuat(int a[][N], int m, int n);

int main()
{
    int a[M][N], b[M][N], c[M][N];
    int m, n;
    nhap(a, b, m, n);
    tong(a, b, c, m, n);
    xuat(c, m, n);
    return 0;
}

void nhap(int a[][N], int b[][N], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
}

void tong(int a[][N], int b[][N], int c[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void xuat(int a[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
