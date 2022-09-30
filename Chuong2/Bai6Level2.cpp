#include<iostream>
using namespace std;

bool checktamgiac(float a, float b, float c){
    if((a + b > c) && (b + c >a) && (c + a >b))
    {
       return true;
    }
    return false;
}

void xuly(float a, float b, float c){
    if(checktamgiac(a,b,c) ==true)
    {
        if(a==b==c){
            cout << "tam giac deu";
        }
        else if((a == b) && (a*a + b*b != c*c)){
            cout << "tam giac can";
        }
        else if((a == b) && (a*a + b*b == c*c)){
            cout << "tam giac vuong can";
        }
        else if((a*a + b*b == c*c)){
            cout << " tam giac vuong";
        }
        else{
            cout << "tam giac thuong";
        }
    }
    else{
        cout << "khong phai tam giac";
    }
}


int main(){
    float a,b,c;
    cin >> a >> b >> c;
    checktamgiac(a,b,c);
    xuly(a,b,c);
    return 0;

}