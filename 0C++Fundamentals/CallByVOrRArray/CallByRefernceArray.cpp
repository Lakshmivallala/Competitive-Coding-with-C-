#include <iostream>
using namespace std;

//call by reference

// 1   2   3   4   5   6   7   8   9   0 

void disp( int * num)
{
   cout<<*num<<"   ";
}
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   for (int x=0; x<10; x++)
   {
       disp (&arr[x]);
   }

   return 0;
}