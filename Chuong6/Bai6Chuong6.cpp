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

void xuly(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    int n;
    int a[MAX];
    cin >> n;
    nhap(a, n);
    xuly(a, n);
    return 0;
}