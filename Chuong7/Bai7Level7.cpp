#include <iostream>
#include <math.h>

using namespace std;

bool scp(int n)
{
    int sqr = sqrt(n);
    return (sqr * sqr == n);
}

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int tong(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (scp(a[i]) == true)
        {
            tong += a[i];
        }
    }
    return tong;
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    nhap(a, n);
    int kq = tong(a, n);
    cout << kq;
    return 0;
}