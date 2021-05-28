#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    void reverseString(string& s) {
        int start,end;
        start=0;
        end=s.size()-1;
        while(start<end)
        {
            int t;
            t=s[start];
            s[start]=s[end];
            s[end]=t;
            start++;
            end--;
        }
    }
};


int main()
{

    // vector<char> s={'H','e','l','l','o',' ','W','o','r','l','d'};
    // reverseString(s);
    // cout<<s;
  string s1="Hello World";
  Solution ob;
  ob.reverseString(s1);
  cout<<s1; //O/p: dlroW olleH

  return 0; //Why is this important?
}
