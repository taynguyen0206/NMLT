#include<iostream>
using namespace std;

int main(){
    char k;
    cin >> k;
    if( k >= 'a' && k <= 'z'){
        k -=32;
    }
    else if(k >='A' && k <= 'Z'){
        k+=32;
    }
    cout << k;
}