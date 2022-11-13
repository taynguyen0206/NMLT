#include <iostream>
using namespace std;

int main()
{
    int n, flag;
    cin >> n;
    int kq = 0;
    while (n > 0)
    {
        flag = n % 10;
        kq = kq * 10 + flag;
        n = n / 10;
    }
    cout << kq;
}