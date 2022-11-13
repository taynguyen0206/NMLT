#include <iostream>
using namespace std;

void nhap(int &tuso, int &mauso)
{
    cin >> tuso >> mauso;
}

void xuat(int tuso, int mauso)
{
    if (mauso == 1)
    {
        cout << tuso;
    }
    else
    {
        cout << tuso << "/" << mauso;
    }
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void tong(int a, int b, int c, int d, int &tuso, int &mauso)
{
    tuso = a * d + b * c;
    mauso = b * d;
    int x = gcd(tuso, mauso);
    tuso /= x;
    mauso /= x;
}

int main()
{
    int a, b, c, d, tuso, mauso;
    nhap(a, b);
    nhap(c, d);
    tong(a, b, c, d, tuso, mauso);
    xuat(tuso, mauso);
    return 0;
}