#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a >0) && (b>0) && (c>0))
    {
        if((a + b > c) && (b + c >a) && (c + a >b))
            {
                cout << "True";
            }
        else
            {
                cout << "False";
            }
    }
    else{
        cout << "kiem tra du lieu nhap vao!";
    }
    return 0;
}
