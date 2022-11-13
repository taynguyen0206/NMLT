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

int xuly(int a[], int n, int x)
{
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            kq = 1;
        }
    }
    return kq;
}

int main()
{
    int n, x, a[MAX];
    cin >> n >> x;
    nhap(a, n);
    int k = xuly(a, n, x);
    cout << k;
    return 0;
}