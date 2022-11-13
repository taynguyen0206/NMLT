#include <iostream>
#include <cmath>
using namespace std;

int tri_tuyet_doi(int n)
{
	if (n >= 0)
		return n;
	else
		return n * (-1);
}

int main()
{
	int n;
	cin >> n;
	// cout << abs(n);
	int kq = tri_tuyet_doi(n);
	cout << kq;
	return 0;
}
