#include <iostream>
using namespace std;

float xuly(int n)
{
    float sum = 0, gt = 1, kq = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        gt *= i;
        kq = kq + (float)sum / gt;
    }
    return kq;
}
int main()
{
    int n;
    cin >> n;
    float kq2 = xuly(n);
    cout << kq2;
    return 0;
}