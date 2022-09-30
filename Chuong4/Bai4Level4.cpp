#include <iostream>
using namespace std;
int main()
{
   int n, reverse_num=0, flag,temp;
   do
   {
      cin >> n;
   } while (n <= 0);
   
   temp=n;
   while(temp!=0)
   {
      flag=temp%10;
      reverse_num=reverse_num*10+flag;
      temp/=10;
   } 
   if(reverse_num==n) 
      cout<<n<<" la so doi xung";
   else
      cout<<n<<" khong la so doi xung";
}