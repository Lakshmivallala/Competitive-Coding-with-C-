#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
  
  char ch = 'a';
  char *p;
  p=&ch; 
  cout<<"ch "<<ch<<endl; //ch a
  cout<<"*p "<<*p<<endl; //*p a
  cout<<"p "<<p<<endl;
  cout<<"&p "<<&p<<endl;
  p++;
  cout<<"p "<<p<<endl; //increases by (4 since int)

  return 0;
}