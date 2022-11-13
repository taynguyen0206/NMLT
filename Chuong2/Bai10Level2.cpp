#include <iostream>
using namespace std;

void xuat(int h, int m, int s)
{
    cout << h << " " << m << " " << s;
}

int check(int h, int m, int s)
{
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void sau_1_giay(int &h, int &m, int &s)
{
    if (s == 59)
    {
        s = 0;
        m += 1;
        if (m == 60)
        {
            m = 0;
            h += 1;
            if (h == 24)
            {
                h = 0;
            }
        }
    }
    else
    {
        s++;
    }
}

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    if (!check(h, m, s))
    {
        cout << "Nhap sai du lieu";
    }
    else
    {
        sau_1_giay(h, m, s);
        xuat(h, m, s);
    }
}