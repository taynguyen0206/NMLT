#include<iostream>
using namespace std;

bool check(int year){
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}

int main(){
    int month, year;
    cin >> month;
    if(month >=1 && month <=12){
        switch (month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "thang nay co 31 ngay";
            break;
        case 4: case 6: case 9: case 11:
            cout << "thang nay co 30 ngay";
            break;
        case 2:
            cout << "nhap nam: ";
            cin >> year;
            if(check(year)==1){
                cout << "thang nay co 29 ngay";
            }
            else{
                cout << "thang nay co 28 ngay";
            }
        }
    }else{
        cout << "thang nay khong ton tai";
    }
}