#include <iostream>
#define MAX 200
using namespace std;

void nhap(float a[], int &nA);
void swap(float &a, float &b);
void xuat(float a[], int nA);

int main()
{
    float a[MAX];
    int nA;
    nhap(a, nA);
    xuat(a, nA);
    return 0;
}

void swap(float &a, float &b)
{
    if (a != b)
    {
        float temp = a;
        a = b;
        b = temp;
    }
}

void nhap(float a[], int &nA)
{
    cin >> nA;
    for (int i = 0; i < nA; i++)
    {
        cin >> a[i];
        int viTri = 0;
        while (viTri < i)
        {
            if (a[viTri] > a[i])
            {
                swap(a[viTri], a[i]);
            }
            viTri++;
        }
    }
}

void xuat(float a[], int nA)
{
    for (int i = 0; i < nA; i++)
    {
        cout << a[i] << " ";
    }
}
