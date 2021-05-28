#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    
    
    bool check=1;
    int n=S.size();
    for(int i=0;i<n;i++)
    { 
  	    if(S[i] != S[n-1-i])
  	    {
  		check=0;
  		break;
  	    }
    }
  	if(check==1)
    return 1;
    else
    return 0;
    
	
	}

};

int main() 
{
   	int t; //Number of test cases
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

// Output:
// 3
// Hello
// 0
// MOM
// 1
// NIGHTHGIN
// 1
    return 0;
}