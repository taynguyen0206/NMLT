#include <iostream>
#include <cmath>

#define MAX 100
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

bool scp(int n)
{
    int sqr = sqrt(n);
    return (sqr * sqr == n);
}

int xuly(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (scp(a[i]) != true)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int kq = xuly(a, n);
    cout << kq;
    return 0;
}