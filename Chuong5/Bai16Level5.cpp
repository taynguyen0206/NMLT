#include <iostream>
using namespace std;

int xuly(long int &n, long int x)
{
    int kq = 0;
    if (n >= x)
    {
        kq = kq + n / x;
        n = n % x;
    }
    return kq;
}

void xuat(long int n)
{
    cout << xuly(n, 100000) << " ";
    cout << xuly(n, 50000) << " ";
    cout << xuly(n, 20000) << " ";
    cout << xuly(n, 10000) << " ";
}

int main()
{
    long int n;
    cin >> n;
    xuat(n);
}