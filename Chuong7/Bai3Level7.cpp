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

bool snt(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < (n - 1); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int xuly(int a[], int n)
{
    int kq = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (snt(a[i]) == true)
        {
            return a[i];
            break;
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
    int kq2 = xuly(a, n);
    cout << kq2;
    return 0;
}