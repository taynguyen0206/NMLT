#include <iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int check(int x)
{
    int k;
    if (x < 0)
    {
        x = -x;
    }
    while (x > 0)
    {
        k = x % 10;
        x /= 10;
    }
    if (k % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int xuly(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (check(a[i]) == true)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int rs = xuly(a, n);
    cout << rs;
    return 0;
}