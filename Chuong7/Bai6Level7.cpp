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
bool check_Shh(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    return false;
}

int xuly(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (check_Shh(a[i]) == true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    int kq2 = xuly(a, n);
    cout << kq2;
    return 0;
}