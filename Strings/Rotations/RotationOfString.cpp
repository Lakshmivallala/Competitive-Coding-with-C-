#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution
{
public:

	bool rotation(string s1, string s2)
	{
		if (s1.length() != s2.length())
			return false;

		string temp;
		temp=s1+s1;

		//n position or not a position
		//if temp.find() does not return anything, then returns no position 
		return (temp.find(s2) != string :: npos);
	}


};


int main()
{
  string s1,s2;
  s1="AACD";
  s2="ACDA"; //returns: The two strings are rotations of each other
  Solution ob;
  if(ob.rotation(s1,s2))
  	cout<<"The two strings are rotations of each other"<<endl;
  else
  	cout<<"The two strings are not rotations of each other"<<endl;

  return 0;
}