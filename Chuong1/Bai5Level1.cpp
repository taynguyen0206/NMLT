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
    int year;
    cin >> year;
    int kq = check(year);
    cout << kq;
    return 0;
}
