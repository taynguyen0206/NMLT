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

int tim_min(int a[], int n)
{
    int min = a[0];
    int vitri = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            vitri = i;
        }
    }
    return vitri;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int kq = tim_min(a, n);
    cout << kq;
    return 0;
}