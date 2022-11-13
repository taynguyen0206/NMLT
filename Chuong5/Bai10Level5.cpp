#include <iostream>
using namespace std;

char check(char n)
{
    char x = n / 10;
    char y = n % 10;
    if ((x * y) == 2 * (x + y))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void xuly()
{
    for (char i = 10; i < 100; i++)
    {
        if (check(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    xuly();
    return 0;
}
