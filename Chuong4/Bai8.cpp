#include<iostream>
#define max 100
using namespace std;

int tachso(int a[], int n) {
    int flag;
    int count = 0;
    while (n > 0) {
        flag = n % 10;
        a[count] = flag;
        count++;
        n /= 10;
    }

    for (int i = 0; i < count; i++) {
        //mảng đang bị ngược lại
        if ((a[i] - a[i + 1]) < 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int a[max];
    do
    {
        cin >> n;
    } while (n <= 0);
    int kq = tachso(a, n);
    cout << kq;
}
