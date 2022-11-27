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

int check_doixung(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a[MAX];
    int n;
    cin >> n;
    nhap(a, n);
    int kq = check_doixung(a, n);
    cout << kq;
    return 0;
}