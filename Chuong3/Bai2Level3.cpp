#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tong =0;
    if(n > 0)
    {
        for(int i = 1; i <=n; i++)
        {
            tong+=i*i;
        }
        cout << tong;
    }else{
        cout << "nhap n > 0";
    }

}