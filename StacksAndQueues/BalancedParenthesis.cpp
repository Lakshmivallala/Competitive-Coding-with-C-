	#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//O/p:
// balancedBrackets
// Not balanced

bool balancedBrackets(string str)
{
	stack<char> s;
	char var;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			s.push(str[i]);
			continue;
		}
		if(s.empty())
			return false;
		switch(str[i])
		{
			case ')':
			var=s.top();
			s.pop();
			if(var=='{'||var=='[')
				return false;
			break;

			case '}':
			var=s.top();
			s.pop();
			if(var=='('||var=='[')
				return false;
			break;

			case ']':
			var=s.top();
			s.pop();
			if(var=='('||var=='{')
				return false;
			break;
		}
	}
	return (s.empty());
}

int main()
{
	string str1="[{()}]";
	string str2="[{()){}}]]";
	if(balancedBrackets(str1))
		cout<<"balancedBrackets"<<endl;
	else
		cout<<"Not balanced"<<endl;

	if(balancedBrackets(str2))
		cout<<"balancedBrackets"<<endl;
	else
		cout<<"Not balanced"<<endl;
	return 0;
}