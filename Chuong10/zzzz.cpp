#include <iostream>
#define N 50
using namespace std;

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

void xuat(int a[][N], int &m, int &n)
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

int main()
{
    int m, n;
    int a[N][N];
    nhap(a, m, n);
    xuat(a, m, n);
    return 0;
}