#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    float tong = 0;
    if(n > 0)
    {
        for (float i = 1; i <= n; i++)
        {
            tong += (1 / i);
        }
            cout << fixed << setprecision(3) << tong;
    }else{
        cout << "nhap n > 0";
    }
}
