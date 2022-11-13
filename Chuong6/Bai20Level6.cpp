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

void lietke_chan(int a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (x <= a[i] && a[i] <= y)
        {
            if (a[i] % 2 == 0)
            {
                cout << a[i] << " ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int x, y;
    cin >> x >> y;
    lietke_chan(a, n, x, y);
    return 0;
}