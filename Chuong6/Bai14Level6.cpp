#include <iostream>
#define MAX 100
using namespace std;

void nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int xuly(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    float a[MAX];
    nhap(a, n);
    int kq = xuly(a, n);
    cout << kq;
}