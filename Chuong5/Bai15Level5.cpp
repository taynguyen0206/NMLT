#include <iostream>
#include <cmath>
using namespace std;

float xuly(int n, float x)
{
    float kq = 0;
    for (int i = 1; i <= n; i++)
    {
        kq = sqrt(x + kq);
    }
    return kq;
}

int main()
{
    int n;
    float x;
    cin >> n >> x;
    float kq2 = xuly(n, x);
    cout << kq2;
    return 0;
}