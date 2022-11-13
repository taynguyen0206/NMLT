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

int xuly(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > 0)
        {
            return a[i];
        }
    }
    return -1;
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