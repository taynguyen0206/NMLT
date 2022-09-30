#include<iostream>
using namespace std;

float check(float a){
    float du = a - int(a);
    if(du >= 0.5){
        a = a +0.5;
    }else{
        a = a;
    }
    return int(a);
    //return a;
}


int main(){
    float a;
    cin >> a;
    float kq = check(a);
    cout << kq;
    return 0;
}