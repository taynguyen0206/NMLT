#include<iostream>
using namespace std;

int smallest(int x, int y, int z)
{
  if (x>y){
    return y>z?z:y;
  }
  else{
    return x>z?z:x;
  }
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int kq = smallest(x,y,z);
    cout << kq;
}