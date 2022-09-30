#include<iostream>
using namespace std;

int main(){
    int h,m,s;
    cin >> h >> m >> s;
    if((h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60))
    {
        cout << "true";
    }
    else{
        cout << "false";
    }
}
/*#include<iostream>
using namespace std;

int check_h(int h){
    if(h>=0 && h <24){
        return true;
    }
    return false;
}

int check_m(int m){
    if(m>=0 && m <60){
        return true;
    }
    return false;
}

int check_s(int s){
    if(s>=0 && s <60){
        return true;
    }
    return false;
}

int main(){
    int h,m,s;
    cin >> h>>m>>s;
    check_h(h);
    check_m(m);
    check_s(s);
    if((check_h(h)==true) && (check_m(m)==true) &&(check_s(s)==true)){
        cout << "true";
    } 
    else{
        cout << "false";
    }
    return 0;
}*/
