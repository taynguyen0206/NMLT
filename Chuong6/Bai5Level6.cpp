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

void xuly(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            tong += a[i];
        }
    }
    cout << tong ;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    xuly(a, n);
    return 0;
}