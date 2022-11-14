#include <iostream>
using namespace std;

int nam_nhuan(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}
int SoNgayTrongThang(int month, int year)
{
    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    case 2:
        if (nam_nhuan(year))
        {
            return 29;
        }
        else
            return 28;
        break;
    default:
        return 31;
    }
}

int check_ngay(int day, int month, int year)
{
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1)
        return 0;
    else
    {
        int maxD = SoNgayTrongThang(month, year);
        if (day > maxD)
            return 0;
        else
            return 1;
    }
}

int xuly(int day, int month, int year)
{
    if (check_ngay(day, month, year))
    {
        int SoNgay = SoNgayTrongThang(month, year) - day;
        for (int i = month + 1; i <= 12; i++)
            SoNgay += SoNgayTrongThang(i, year);
        return SoNgay;
    }
    else
        return -1;
}

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    int kq = xuly(day, month, year);
    cout << kq;
    return 0;
}
