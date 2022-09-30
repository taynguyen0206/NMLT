#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int kq = (a < b) ? b : a;
    cout << kq;
    // if (a > b){
    //     cout << a;
    // }
    // else if (a < b){
    //     cout << b;
    // }
    // else{
    //     cout << a;
    // }
    return 0;
}