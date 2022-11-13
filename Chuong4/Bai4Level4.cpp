#include <iostream>
using namespace std;
int main()
{
   int n, so_dao_nguoc = 0, flag, temp;
   do
   {
      cin >> n;
   } while (n <= 0);

   temp = n;
   while (temp != 0)
   {
      flag = temp % 10;
      so_dao_nguoc = so_dao_nguoc * 10 + flag;
      temp /= 10;
   }
   if (so_dao_nguoc == n)
      cout << n << " la so doi xung";
   else
      cout << n << " khong la so doi xung";
}