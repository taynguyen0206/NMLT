#include<iostream>
using namespace std;

bool check(int n)
{
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; 
    return false;
}


int main(){
    int n;
    cin >> n;
	check(n);
    for(int i = 1; i < n;i++){
		if(check(i)==true){
			cout << i << " ";
		}
	}
	return 0;
}