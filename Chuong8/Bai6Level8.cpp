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

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void xuly(int A[], int n, int &max, int &min)
{
    max = min = A[0];
    for (int i = 0; i < n; i++)
        if (A[i] > A[max])
        {
            max = i;
        }
        else
        {
            if (A[i] < A[min])
            {
                min = i;
            }
        }
}

void swap(int A[], int max, int min)
{
    int t = A[max];
    A[max] = A[min];
    A[min] = t;
}

int main()
{
    int n, max, min;
    cin >> n;
    int a[MAX];
    nhap(a, n);
    xuly(a, n, max, min);
    swap(a, max, min);
    xuat(a, n);
    return 0;
}
