
#include <iostream>
#include <math.h>
 
using namespace std;
 
bool scp(int n){
    int sqr = sqrt(n);
    return (sqr*sqr == n);
}

int main(){
    int n;
    cin >> n;
    scp(n);
    for(int i = 1; i < n; i++){
        if(scp(i)==true){
            cout << i << " ";
        }
    }
}