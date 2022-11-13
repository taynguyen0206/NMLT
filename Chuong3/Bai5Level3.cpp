#include <iostream>
using namespace std;

void timuoc(int n)
{
    int tong;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                tong += i;
            }
        }
    }
    else
    {
        cout << "nhap n > 0";
    }
    cout << tong;
}

int main()
{
    int n;
    cin >> n;
    timuoc(n);
    return 0;
}