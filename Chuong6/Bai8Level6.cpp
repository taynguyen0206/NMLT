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
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            kq = 1;
        }
    }
    return kq;
}
int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int k = xuly(a, n);
    cout << k;
}