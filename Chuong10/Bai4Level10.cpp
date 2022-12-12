#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

int count(char S[]);
void nhap(char chuoi[]);

int main()
{
    char S[MAX];
    nhap(S);
    int kq = count(S);
    cout << kq;
    return 0;
}

void nhap(char S[])
{
    cin.getline(S, MAX);
}

int count(char S[])
{
    int sum = 0;
    for (int i = 0; i < strlen(S) - 1; i++)
    {
        if (S[i] != ' ' && S[i + 1] == ' ')
        {
            sum++;
        }
    }
    return sum + 1;
}
