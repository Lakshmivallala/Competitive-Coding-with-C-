#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
  
  int a = 10;
  int *p;
  p=&a; 

  int **q;
  q=&p;

  cout<<"a: "<<a<<endl;
  cout<<"&a loc1: "<<&a<<endl;
  cout<<"p loc1: "<<p<<endl;
  cout<<"&p loc2: "<<&p<<endl;
  cout<<"*p: "<<*p<<endl;
  cout<<"&q loc3: "<<&q<<endl;
  cout<<"q loc2: "<<q<<endl;
  cout<<"*q loc1: "<<*q<<endl;
  cout<<"**q: "<<**q<<endl;

  return 0;
}