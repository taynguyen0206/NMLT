#include <iostream>
using namespace std;

int giaithua(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}

int tong_gt(int n)
{
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += giaithua(i);
    }
    return tong;
}

int main()
{
    int n;
    cin >> n;
    giaithua(n);
    int kq = tong_gt(n);
    cout << kq;
    return 0;
}