#include <iostream>
#include <cmath>
using namespace std;

float xuly(int n, float x)
{
    if (n == 0)
        return 1;
    else
    {
        float gt = 1, sum = 1;
        float luy_thua;
        for (int i = 1; i <= n; i++)
        {
            luy_thua = pow(x, i);
            gt *= i;
            sum += (float(luy_thua) / gt);
        }
        return sum;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    float kq2 = xuly(n, x);
    cout << kq2 << endl;
    return 0;
}