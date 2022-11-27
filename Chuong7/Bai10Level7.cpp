#include <iostream>
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int ktra_sochan(int k)
{
    if (k < 0)
    {
        k = -k;
    }
    while (k >= 10)
    {
        k /= 10;
    }
    if (k % 2 == 0)
    {
        return 1;
    }
    return 0;
}

void xuly(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        if (ktra_sochan(a[i]) == true)
        {
            b[i] = 1;
        }
    }
}
void xuat(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    int b[100];
    nhap(a, n);
    xuly(a, n, b);
    xuat(a, n, b);
    return 0;
}
