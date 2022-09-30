#include<iostream>
using namespace std;

// ax + b = 0
void xuly(int a, int b){
    float x;
    if(a == 0)
    {
        if(b == 0)
        {
            cout << "PT vo so nghiem!";
        }
        else
        {
            cout << "PT vo nghiem";
        }
    }else{
        x = float(-b)/a;
        cout << x;
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    xuly(a,b);
    return 0;
}