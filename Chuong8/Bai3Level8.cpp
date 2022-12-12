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

void xuat(int a[], int kq)
{
    if (kq == -1)
    {
        cout << "-1";
    }
    else
    {
        cout << a[kq];
    }
}
int check(int x)
{
    int k1 = x, k2 = 0;
    while (k1 > 0)
    {
        k2 = 10 * k2 + k1 % 10;
        k1 /= 10;
    }
    if (k2 == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int xuly(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int kq = xuly(a, n);
    xuat(a, kq);
    return 0;
}