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

int main()
{
    int n;
    int a[MAX];
    cin >> n;
    nhap(a, n);
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    int tbc = tong / n;
    cout << tbc;
    return 0;
}