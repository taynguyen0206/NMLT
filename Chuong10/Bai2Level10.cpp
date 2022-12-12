#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

void DecToBin(long int dec, char bin[]);
void DecToOct(long int dec, char oct[]);
void DecToHex(long int dec, char hex[]);
void swap(char &x, char &y);
void swap_mang(char a[], int n);

int main()
{
    long int dec;
    char bin[MAX], oct[MAX], hex[MAX];
    cin >> dec;
    DecToBin(dec, bin);
    cout << bin << " ";
    DecToOct(dec, oct);
    cout << oct << " ";
    DecToHex(dec, hex);
    cout << hex << " ";
    return 0;
}

void swap(char &x, char &y)
{
    char temp = x;
    x = y;
    y = temp;
}

void swap_mang(char a[], int n)
{
    int i;
    for (i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - 1 - i]);
    }
}

void DecToBin(long int dec, char bin[])
{
    int i = 0;
    while (dec > 0)
    {
        bin[i++] = dec % 2 + '0';
        dec /= 2;
    }
    bin[i] = '\0';
    swap_mang(bin, i);
}

void DecToOct(long int dec, char oct[])
{
    int i = 0;
    while (dec > 0)
    {
        oct[i++] = dec % 8 + '0';
        dec /= 8;
    }
    oct[i] = '\0';
    swap_mang(oct, i);
}

void DecToHex(long int dec, char hex[])
{
    int i = 0;
    while (dec > 0)
    {
        if (dec % 16 + '0' <= '9')
            hex[i++] = dec % 16 + '0';
        else
            hex[i++] = dec % 16 - 10 + 'A';
        dec /= 16;
    }
    hex[i] = '\0';
    swap_mang(hex, i);
}
