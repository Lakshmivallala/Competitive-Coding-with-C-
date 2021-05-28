#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//https://www.youtube.com/watch?v=1YUqtoT9YoE
//Return the below asked number sequence. Return 11 if n=2, 1211 if n=4 et cetera
//  1.     1
//  2.     11
//  3.     21
//  4.     1211
//  5.     111221 
//  6.     312211
//  7.     13112221
//  8.     1113213211
//  9.     31131211131221
// 10.     13211311123113112211

class Solution
{
public:
	string CountAndSay(int n)
	{
		if(n==1)
			return "1";
		if(n==2)
			return "11";

		string s;
		s="11";

		for(int i=3;i<=n;i++)
		{
			string t="";
			s=s+'$';
			int c=1;
			for(int j=1; j<s.length();j++)
			{
				if(s[j]!=s[j-1])
				{
					t=t+to_string(c);
					t=t+s[j-1];
					c=1;
				}
				else
					c++;
			}
			s=t;
		}
		return s;
	}

};


int main()
{
  int n;
  cout<<"Enter sequence number: "<<endl;
  cin>>n;
  Solution ob;
  cout<<ob.CountAndSay(n);


  return 0;
}