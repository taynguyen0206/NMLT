#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;


void nhap(char S[]);
int sum(char S[]);
void xuat(int kq);

int main()
{
    char S[MAX];
    nhap(S);
    int kq = sum(S);
    xuat(kq);
    return 0;
}

void nhap(char S[])
{
    cin.getline(S, MAX);
}

int sum(char S[])
{
    int len = strlen(S);
    int i, sum, flag = 0;
    while (i < len)
    {
        bool flag = true;
        if (S[i] >= '0' && S[i] <= '9')
        {
            flag = flag * 10 + (S[i] - 48);
            if (S[i + 1] != '\0' && S[i + 1] >= '0' && S[i + 1] <= '9')
            {
                flag = false;
            }
        }
        if (flag)
        {
            sum += flag;
            flag = 0;
            flag = true;
        }
        i++;
    }
    return sum;
}

void xuat(int kq)
{
    cout << kq;
}
