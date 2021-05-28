#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s = "Hello World";
    string r;
    for(int i=s.size()-1;i>=0;i--)
    	r.push_back(s[i]);
  	cout<<r<<endl;
  return 0;   
}
