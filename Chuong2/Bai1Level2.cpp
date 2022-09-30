#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(b != 0){
        cout << float(a)/b;
    }else{
        cout << "Khong Chia Duoc!";
    }
    return 0;
}