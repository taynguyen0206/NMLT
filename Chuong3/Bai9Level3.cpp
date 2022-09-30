#include<iostream>
using namespace std;

int gcd(int a, int b){
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a; 
}

// int gcd2(int a, int b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

int main(){
    int a,b;
    cin >> a >> b;
    int kq = gcd(a,b);
    cout << kq;
}