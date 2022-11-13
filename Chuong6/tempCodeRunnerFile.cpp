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

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
}