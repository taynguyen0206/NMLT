#include <iostream>
#define MAX 200
using namespace std;

void nhap(float a[], int &n);
float tim_max(float a[], int n);
void xoa_ptu(float a[], int &n, int k);
void xoa_max(float a[], int &n);
void xuat(float a[], int n);

int main()
{
    float a[MAX];
    int n;
    nhap(a, n);
    xoa_max(a, n);
    xuat(a, n);
    return 0;
}

void nhap(float a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

float tim_max(float a[], int n)
{
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void xoa_ptu(float a[], int &n, int k)
{
    for (int i = k; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void xoa_max(float a[], int &n)
{
    float max = tim_max(a, n);
    int i = 0;
    while (i < n)
    {
        if (a[i] == max)
        {
            xoa_ptu(a, n, i);
        }
        else
        {
            i++;
        }
    }
}
