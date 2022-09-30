#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    max = (max > d) ? max : d;

    if(a == b && b == c && c == d){
        cout << "4 so bang nhau";
    }
    else{
        cout << max;
    }
}