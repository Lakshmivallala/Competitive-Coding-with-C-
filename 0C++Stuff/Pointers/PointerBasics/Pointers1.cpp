#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
  
  int a = 10;
  int *p;
  p=&a; //p contains location of a variable

  cout<<"a: "<<a<<endl;
  cout<<"&a: "<<&a<<endl;
  cout<<"p: "<<p<<endl;
  cout<<"&p: "<<&p<<endl;
  cout<<"*p: "<<*p<<endl;

  // LEAD TO ERROR:
  // cout<<"*a: "<<*a<<endl;
  // cout<<"**p: "<<**p<<endl;


  return 0;
}