#include <iostream>
#include <cmath>
#define MAX 200
using namespace std;

void nhap(int a[], int &n);
void xoa_pt(int a[], int &n, int index);
void xoa_pt_trung(int a[], int &n);
void xuat(int a[], int n);

int main()
{
    int a[MAX];
    int n;
    nhap(a, n);
    xoa_pt_trung(a, n);
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

void xoa_pt(int a[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void xoa_pt_trung(int a[], int &n)
{
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n)
        {
            if (a[j] == a[i])
            {
                xoa_pt(a, n, j);
            }
            else
            {
                j++;
            }
        }
        i++;
    }
}
