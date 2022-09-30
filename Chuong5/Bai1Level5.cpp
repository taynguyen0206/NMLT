#include<iostream>
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
    for(int i = 0; i < n;i++){
		if(snt(i)==true){
			cout << i << " ";
		}
	}
	return 0;
}