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

bool snt(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < (n - 1); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
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

void xuly(int a[], int n)
{
    int count_nt = 0;
    int count_hh = 0;
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == true)
        {
            count_nt++;
        }
        else if (check_Shh(a[i]) == true)
        {
            count_hh++;
        }
    }
    cout << count_nt << " " << count_hh << endl;
    if (count_nt == count_hh)
    {
        cout << "Bang nhau";
    }
    else
    {
        cout << "Khong bang nhau";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    xuly(a, n);
    return 0;
}
