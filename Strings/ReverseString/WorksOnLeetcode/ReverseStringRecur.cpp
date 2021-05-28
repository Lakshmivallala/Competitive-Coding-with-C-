#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//O(N) time complexity 
//This is iterative, hence O(1) space complexity
//In Recursive, O(N) to store recursive stack

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start,end;
        start=0;
        end=s.size()-1;
        if(start>=end)
            return 0;
        
            int t;
            t=s[start];
            s[start]=s[end];
            s[end]=t;
            start++;
            end--;

            reverseString(vector<char>&)
        
    }
    // return s;
};


int main()
{
  string

  return 0; //Why is this important?
}
