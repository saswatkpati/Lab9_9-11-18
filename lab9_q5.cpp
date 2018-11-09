//Write a piece of code which prints the characters in a cstring in a reverse order.

#include <iostream>
using namespace std;

int main()
{
   char a[10] ="abcde";
   char* aptr;
   aptr=a;
   //using the loops
   for(int i=10;i>=0;i--)
   {
       cout<<*(aptr+i);
   }
   return 0;
}
