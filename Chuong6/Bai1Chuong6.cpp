#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}