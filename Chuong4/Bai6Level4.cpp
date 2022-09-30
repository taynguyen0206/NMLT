#include<iostream>
#define MAX 100
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
    int n, flag;
    int a[MAX];
    do
    {
        cin >> n;
    } while (n <= 0);
    snt(n);
    int count = 0;
    while(n > 0){
        flag = n % 10;
        a[count] = flag; 
        count++;
        n /= 10;
    }
    int kq = 0;
    for(int i = 0; i < count; i++){
        if(snt(a[i])==true){
            kq++;
        }
    }
    cout << kq;
}