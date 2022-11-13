#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int min_thu_hai(int a, int b, int c)
{
    int m = min(min(a, b), c);
    int M = max(max(a, b), c);
    if (a != m && a != M)
    {
        return a;
    }
    else if (b != m && b != M)
    {
        return b;
    }
    else if (c != m && c != M)
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int kq = min_thu_hai(a, b, c);
    cout << kq;
    return 0;
}