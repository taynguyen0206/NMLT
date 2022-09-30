
#include <iostream>
#include <math.h>
 
using namespace std;
 
bool scp(int n){
    int sqr = sqrt(n);
    return (sqr*sqr == n);
}

int main(){
    int n;
    do
    {
        cin >> n;
    } while (n <=0);
    scp(n);
    if(scp(n)==true){
        cout << n << " la so chinh phuong";
    }
    else{
        cout << n << " khong la so chinh phuong";
    }
}