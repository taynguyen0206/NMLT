#include<iostream>
using namespace std;

void timuoc(int n)
{
    if(n > 0){
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                cout << i << " ";
            }
        }
    }else{
        cout << "nhap n > 0";
    }
}

int main(){
    int n;
    cin >> n;
    timuoc(n);
    return 0;
}