#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // khai bao N
    int N;
    cin >> N;
    bool Check = true;
    int gan = N;
    int cuoi = gan % 10;
    while (gan != 0)
    {
        int ke_cuoi = gan % 10;
        gan /= 10;
        if (cuoi < ke_cuoi)
        {
            Check = false;
            break;
        }
        else
        {
            cuoi = ke_cuoi;
        }
    }
    if (Check == true)
    {
        cout << "day tang dan";
    }
    else
    {
        cout << "day khong tang dan" << endl;
    }
}