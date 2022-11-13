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
void xuly(int a[], int n, int x)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            tong += a[i];
        }
    }
    cout << tong;
}

int main()
{
    int n, x, a[MAX];
    cin >> n >> x;
    nhap(a, n);
    xuly(a, n, x);
    return 0;
}