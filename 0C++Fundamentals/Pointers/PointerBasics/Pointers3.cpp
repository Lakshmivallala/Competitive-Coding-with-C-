#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
  
  int a = 10;
  int *p;
  p=&a; //*p = a after declaring leads to error 
  cout<<"p "<<p<<endl;
  p++;
  cout<<"p "<<p<<endl; //increases by (4 since int)

  return 0;
}