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

int check_tangdan(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
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
    int kq = check_tangdan(a, n);
    if (kq == 1)
    {
        cout << "Mang tang dan";
    }
    else
    {
        cout << "Mang khong tang dan";
    }
    return 0;
}