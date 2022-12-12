#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;


void nhap(char S[]);
void del_space(char S[], char kq[]);
void xuat(char S[]);

int main()
{
    char S[MAX], kq[MAX];
    nhap(S);
    del_space(S, kq);
    xuat(kq);
    return 0;
}

void nhap(char S[])
{
    cin.getline(S, MAX);
}

void del_space(char S[], char kq[])
{
    int dai = 0, i = 0;
    int len = strlen(S);
    while (i < len - 1)
    {
        if (S[i] != ' ')
        {
            kq[dai++] = S[i];
        }
        else if (dai != 0 && S[i] == ' ' && S[i + 1] != ' ')
        {
            kq[dai++] = ' ';
        }
        i++;
    }
    kq[dai] = '\0';
}

void xuat(char S[])
{
    cout << S;
}
