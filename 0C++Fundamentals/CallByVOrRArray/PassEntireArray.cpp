#include <iostream>
using namespace std;

//passing entire array into the function instead of passing array elements
//The array name itself is the address of first element of that array
//if array name is arr then you can say that arr is equivalent to the &arr[0]

void disp( int * num,int n)
{  
   for (int x=0; x<n; x++)
   {
       cout<<*num<<"  ";
       *num++;
   }
}
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   disp(arr,7); //passing entire array as an argument/actual parameter
   return 0;
}