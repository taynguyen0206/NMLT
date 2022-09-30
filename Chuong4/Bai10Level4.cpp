#include<iostream>
using namespace std;

long long fibo(int n)
{
    long long f1=0,f2=1,fi;
    fi=f2;
    for(int i = 1;i <= n ;i ++)
        {
            cout<< fi <<" ";
            fi = f1 + f2;
            f1 = f2;
            f2 = fi;
        }
    return fi;
}

int main()
{
	int n;
	cin >> n;
    fibo(n);
	cout<<endl;
}