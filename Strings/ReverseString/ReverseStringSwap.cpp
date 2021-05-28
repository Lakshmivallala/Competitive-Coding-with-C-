#include<iostream>

using namespace std;


class Solution {
public:
    void reverseString(string& s) 
    {
      int n=s.size();
        for(int i=0;i<n/2;i++) //OBSERVE n/2
          //Otherwise output remains unchanged
          swap(s[i],s[n-i-1]);
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
