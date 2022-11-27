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

float xuly(int a[], int n)
{
    int count = 0;
    int tong_nt = 0;
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == true)
        {
            count++;
            tong_nt += a[i];
        }
    }
    return float(tong_nt) / count;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    float kq = xuly(a, n);
    cout << kq;
    return 0;
}