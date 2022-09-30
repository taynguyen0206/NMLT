#include<iostream>
using namespace std;

int main(){
    int a[20];
    int n;
    int max = 0;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        if((n % i == 0) && (i % 2 == 1))
        {
            if(i > max){
                max = i;
            }
        }
    }
    cout << max;

}