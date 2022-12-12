#include <iostream>
#define MAX 200
using namespace std;

void nhap(float a[], int &nA);
void swap(float &a, float &b);
void xuat(float a[], int nA);

int main()
{
    float A[MAX];
    int nA;
    nhap(A, nA);
    xuat(A, nA);
    return 0;
}

void swap(float &a, float &b)
{
    if (a != b)
    {
        float t = a;
        a = b;
        b = t;
    }
}

void nhap(float a[], int &nA)
{
    cin >> nA;
    for (int i = 0; i < nA; i++)
    {
        cin >> A[i];
        int viTri = 0;
        while (viTri < i)
        {
            if (A[viTri] > A[i])
            {
                swap(A[viTri], A[i]);
            }
            viTri++;
        }
    }
}

void xuat(float a[], int nA)
{
    for (int i = 0; i < nA; i++)
    {
        cout << A[i] << " ";
    }
}