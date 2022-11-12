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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            count++;
            tong += a[i];
        }
    }
    float tbc = float(tong) / count;
    cout << tbc;
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