#include<iostream>
using namespace std;

void timuoc(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    cout << count;
}

int main(){
    int n;
    cin >> n;
    timuoc(n);
    return 0;
}