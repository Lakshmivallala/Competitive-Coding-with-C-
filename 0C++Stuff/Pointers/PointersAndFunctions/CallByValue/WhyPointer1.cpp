#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void f(int a)
{
	a++; //this is will be a local variable to this fucntion f()
	cout<<"Inside f() "<<a<<endl; //prints 11
}

int main()
{
  int a =10;
  cout<<"Outiside f() before passing into function "<<a<<endl; //prints 10
  f(a);
  cout<<"Outiside f() after passing into function "<<a<<endl; //prints 10
  //We use pass by value/pass by reference to avoid this
  return 0;
}