#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;   
    int tich =1;
    if(n > 0){
        for(int i = 1; i <=n ; i++)
        {
            tich*=i;
        }
        cout << tich;
    }else{
        cout << "nhap n > 0";
    }
    return 0;
}