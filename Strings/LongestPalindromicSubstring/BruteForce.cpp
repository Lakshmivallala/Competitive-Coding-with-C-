#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//BRUTE FORCE APPROACH
//Find all substrings and check and compare palindrome substrings

class Solution
{
public:

	void displaySS(string s, int low, int high)
	{
		for(int i=low;i<=high;i++)
			cout<<s[i];
	}
	int longestPSS(string s)
	{
		int n;
		n=s.length();
		int maxL=1,start=0;

		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				int flag=1;	

				for(int k=0;k<(j-i-1)/2;k++)
					if(s[i+k]!=s[j-k])
						flag=0;

				if(flag && (j-i-1) > maxL)
				{
					start=i;
					maxL=j-i-1;
				}
			}
		}	
		displaySS(s,start,start+maxL-1);

		return maxL;
	}

};


int main()
{
  string s="Hello";
  Solution ob;
  cout<<ob.longestPSS(s)<<endl;

  return 0;
}