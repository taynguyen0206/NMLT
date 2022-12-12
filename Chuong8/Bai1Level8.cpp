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
        if ((a[i] + a[i + 1]) % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a[MAX];
    int n;
    cin >> n;
    nhap(a, n);
    int kq = xuly(a, n);
    cout << kq;
    return 0;
}