#include<iostream>
using namespace std;

int check(int h, int m, int s){
    if((h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60))
    {
        return true;
    }
    else{
        return false;
    }
}

void sau_mot_giay(int h, int m, int s){
    if(check(h,m,s)==1)
    {
        if(h==0 && m ==0 && s==0){
        cout << 23 << " ";
    }
    else{
        if(m==0 && s==0){
            cout << h-1 << " ";
        }
        else{
            cout << h << " ";
        }
    }
    if(m==0 && s==0){
        cout << 59 << " ";
    }else{
        if(s==0){
            cout << m-1 << " ";
        }else{
            cout << m << " ";
        }
    }
        if(s==0){
            cout << 59 << " ";
        }else{
            cout << s-1 << " ";
        }
    }else{
        cout << 0;
    }
    
}

int main(){
    int h,m,s;
    cin >> h >> m >> s;
    check(h,m,s);
    sau_mot_giay(h,m,s);
    return 0;
}