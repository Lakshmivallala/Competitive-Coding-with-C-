#include <iostream>
using namespace std;

//call by value

// a   b   c   d   e   f   g   h   i   j 

void disp( char ch)
{
   cout<<ch<<"   ";
}
int main()
{
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
   for (int x=0; x<10; x++)
   {
       disp (arr[x]);
   }

   return 0;
}