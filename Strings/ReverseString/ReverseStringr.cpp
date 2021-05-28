#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s = "Hello World";
    string r=string(s.rbegin(),s.rend()); //rbegin returns a reverse iterator 
    cout<<r<<endl;
  
  return 0;   
}
