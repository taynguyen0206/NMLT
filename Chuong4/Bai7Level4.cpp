#include<iostream>
#define max 100
using namespace std;

int check(int n, int a[]){
    int flag;
    int count = 0;
    while(n > 0){   
        flag = n % 10;
        a[count] = flag; 
        count++;
        n/=10;
    }
    // for(int i = 0; i < count; i++){
    //     cout << a[i] << " ";
    // }

    for(int i = 0; i < count; i++)
    {
        if(a[i] % 2 != 0){
            return false;
            //break;
        }
    }
    return true;
}
int main(){
    int n;
    do
    {
        cin >> n;
    } while (n <= 0);
    
    int a[max];
    int q = check(n,a);
    cout << q;
    //check(n,a);
}