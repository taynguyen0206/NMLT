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

void lietke(float a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (x <= a[i] && a[i] <= y)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    float a[MAX];
    nhap(a, n);
    int x, y;
    cin >> x >> y;
    lietke(a, n, x, y);
    return 0;
}