#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    string reverseString(char const* s) {
          
          int n=strlen(s);
          char *rev = new char[n+1];
          strcpy(rev,s);
          for(int i=0,j=n-1;i<j;i++,j--)
            swap(rev[i],rev[j]);
          return rev;

    }
};


int main()
{

    const char *s = "Hello World";
    Solution ob;
    cout<<ob.reverseString(s);
  
  return 0;   
}
