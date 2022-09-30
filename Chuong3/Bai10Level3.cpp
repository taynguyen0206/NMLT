#include<iostream>
using namespace std;

void xuly(int a, int b, int n){
    int tong = 0;
    for(int i = 0; i < n; i++){
        if((i % a == 0) && (i % b !=0)){
            tong+=i;
        }
    }
    cout << tong;
}


int main(){
    int a,b,n;
    cin >> a >> b >> n;
    xuly(a,b,n);
    return 0;
}