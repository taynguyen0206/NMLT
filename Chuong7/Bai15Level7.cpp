#include <iostream>
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int check(int a[], int n, int &k)
{
    k = a[1] - a[0];
    int flag = 1;
    for (int i = 2; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] != k)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n, k;
    cin >> n;
    int a[100];
    nhap(a, n);
    int kq = check(a, n, k);
    cout << kq;
    return 0;
}