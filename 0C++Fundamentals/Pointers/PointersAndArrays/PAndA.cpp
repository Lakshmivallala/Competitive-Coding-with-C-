#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a[]={10,20,30,40};
  cout<<*a<<endl; //returns 10 or the 0th element of the array

  // a alrady contains the address of the 0th element

  cout<<"Output array using new pointer"<<endl;
  int *p;
  p=a;
  for(int i=0;i<4;i++)
  {
  	cout<<*p<<endl;
  	p++;
  }

  //Similarly, we can use the array pointer to output the array
  cout<<"Output array using array pointer"<<endl;
  for(int i=0;i<4;i++)
  {
  	cout<<*(a+i)<<endl;
  }

  //ILLEGAL: a is a constant array and it can't be incremented/modified
  // cout<<"Output array using array pointer"
  // for(int i=0;i<4;i++)
  // {
  // 	cout<<*a<<endl;
  // 	a++; //illegal cant modify
  // }

  return 0;
}