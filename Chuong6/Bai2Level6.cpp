#include <iostream>
using namespace std;
#define MAX 100

void nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

// void xuat(float a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

int main()
{
    int n;
    cin >> n;
    float a[MAX];
    nhap(a, n);
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    cout << tong;
    return 0;
}
