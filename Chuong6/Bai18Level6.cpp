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

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void xuat_nguoc(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    cout << endl;
    cout << "mang xuat nguoc" << endl;
    xuat_nguoc(a, n);
    return 0;
}