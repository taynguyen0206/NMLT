#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

void nhap(char chuoi[]);
void daonguoc(char chuoi[]);
void xuat(char kq[]);

int main()
{
    char chuoi[MAX];
    nhap(chuoi);
    daonguoc(chuoi);
    xuat(chuoi);
    return 0;
}

void nhap(char chuoi[])
{
    cin.getline(chuoi, MAX);
}

void daonguoc(char chuoi[])
{
    _strrev(chuoi);
}

void xuat(char kq[])
{
    cout << kq << endl;
}
