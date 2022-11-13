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

float xuly(int n, int k)
{
    float kq = giaithua(n) / (giaithua(k) * (giaithua(n - k)));
    return kq;
}

int main()
{
    int n, k;
    do
    {
        cin >> n >> k;
    } while (k > n);
    int kq2 = xuly(n, k);
    cout << kq2;
    return 0;
}