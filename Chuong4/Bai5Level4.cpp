#include<iostream>
using namespace std;

int timmax(int n){
    int max = 0;
    int flag;
    while(n > 0){
        flag = n % 10;
        n /= 10;
        if(flag > max){
            max = flag;
        }
        //cout << flag << " ";
    }
    return max;
}


int main(){
    int n;
    do
    {
        cin >> n;
    } while (n <= 0);
    
    int kq = timmax(n);
    cout << kq;

}