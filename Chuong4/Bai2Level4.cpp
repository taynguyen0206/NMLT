
#include <iostream>
#include <math.h>
 
using namespace std;
 
bool snt(int n)
{
	if (n < 2){
		return false;
	}		
	
	for (int i = 2; i < (n - 1); i++){
		if (n % i == 0){
			return false;
		}	
	}
	
	return true;
}

int main(){
    int n;
    do
    {
        cin >> n;
    } while (n <=0);
    snt(n);
    if(snt(n)==true){
        cout  << n << " la so nguyen to";
    }
    else{
        cout << n << " khong la so nguyen to";
    }
}