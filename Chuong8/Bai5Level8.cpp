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
    for (int i = 0; i < n - 1; i++)
    {
        int dieu_kien = (((a[i] > a[i - 1]) && (a[i] > a[i + 1])) || ((a[i] < a[i - 1]) && (a[i] < a[i + 1])));
        if (dieu_kien == false)
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