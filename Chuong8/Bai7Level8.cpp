#include <iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int tim_vtri(int a[], int n, int x)
{
    if (x < a[0])
        return 0;
    else if (x > a[n - 1])
    {
        return n;
    }
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            return i;
        }
    }
}

void xuly(int a[], int n, int k, int x)
{
    for (int i = n - 1; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    int a[MAX];
    nhap(a, n);
    int p = tim_vtri(a, n, x);
    xuly(a, n, p, x);
    xuat(a, n);
    return 0;
}
