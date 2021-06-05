#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution
{
public:


};


int main()
{
// C uses malloc(), calloc() to allocate memory. free() to free this memory
// C++ can use malloc() calloc() OR new and delete easily
// new initialises memory and returns the address of initialised memory to pointer 
// variable

// PointerVariable=new DataType

  int *p;
  p=NULL;
  p=new int;

  //or int *p=new int;

//initialising memory PointerVariable=new DataType(value)
  int *q=new int(25); 

//allocate block/array of memory
  int *r = new int[10]; //allocates memory for 10 integers continuously 
  // returns pointer to first element of the array/sequence assigned to r pointer

  return 0;
}