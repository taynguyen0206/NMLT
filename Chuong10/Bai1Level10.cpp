#include <iostream>
#include <string.h>
#include <cmath>
#define MAX 30

long chuyendoi(char hex[]);

int main()
{
    char dec[MAX], hex[MAX];
    gets(hex);
    long kq = chuyendoi(hex);
    std ::cout << kq;
    return 0;
}

long chuyendoi(char hex[])
{
    long kq = 0;
    for (int i = 0; i < strlen(hex); i++)
        if (hex[i] >= '0' && hex[i] <= '9'){
        	kq += (hex[i] - '0') * pow(16, strlen(hex) - 1 - i);
		}
        else{
        	kq += (hex[i] - 55) * pow(16, strlen(hex) - 1 - i);
		}
    return kq;
}
