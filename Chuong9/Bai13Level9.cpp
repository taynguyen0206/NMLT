#include <iostream>
#include <cmath>
#define MAX 200
using namespace std;

void nhap(int a[], int &n);
int scp(int n);
void xoa_ptu(int a[], int &n, int k);
void xoa_scp(int a[], int &n);
void xuat(int a[], int n);

int main()
{
    int a[MAX];
    int n;
    nhap(a, n);
    xoa_scp(a, n);
    xuat(a, n);
    return 0;
}

void nhap(int a[], int &n)
{
    cin >> n;
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

int scp(int n)
{
    int sqr = sqrt(n);
    return (sqr * sqr == n);
}

void xoa_ptu(int a[], int &n, int k)
{
    for (int i = k; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void xoa_scp(int a[], int &n)
{
    int i = 0;
    while (i < n)
    {
        if (scp(a[i]))
        {
            xoa_ptu(a, n, i);
        }
        else
        {
            i++;
        }
    }
}
