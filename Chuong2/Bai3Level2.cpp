#include <iostream>
using namespace std;

int min(int x, int y, int z)
{
  if (x > y)
  {
    return y > z ? z : y;
  }
  else
  {
    return x > z ? z : x;
  }
}

int main()
{
  int x, y, z;
  cin >> x >> y >> z;
  int kq = min(x, y, z);
  cout << kq;
}