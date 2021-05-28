#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
  
  int a = 10;
  int *p;
  p=&a; //p contains location of a variable

  *p=20;
  cout<<"a: "<<a<<" "<<"*p "<<*p<<endl;


  return 0;
}