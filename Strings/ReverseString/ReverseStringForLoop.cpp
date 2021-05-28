#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    void reverseString(string& s) {
        for(int i=s.length()-1;i>0;i--)
        {
        	cout<<s[i];
        }
    }
};


int main()
{

    
  string s1="Hello World";
  Solution ob;
  ob.reverseString(s1);

  return 0; 
}
