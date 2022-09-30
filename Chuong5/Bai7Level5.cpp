
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
    cin >> n;
    snt(n);
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if((n%i==0) && (snt(i)==true)){
            dem++;
        }
    }
    cout << dem;
}


