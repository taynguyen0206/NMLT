// dãy fibonacci 1 1 2 3 5 8 13 21 34
// F(0) = F(1) = 1
// F(n >= 2) = F(n - 1) + F(n - 2)

#include <iostream>
using namespace std;

int fibonacci(int k)
{
    if (k == 0 || k == 1)
    {
        return 1;
    }
    else if (k < 0)
    {
        return -1;
    }
    else
    {
        return (fibonacci(k - 1) + fibonacci(k - 2));
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}