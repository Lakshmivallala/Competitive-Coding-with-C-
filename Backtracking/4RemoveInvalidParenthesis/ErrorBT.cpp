#include<iostream>
#include <set>
#include <queue>

using namespace std;

bool isParen(char c)
{
	return ((c=='(') || (c==')'));
}

bool StringisValid(string s)
{
	int cnt=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(')
			cnt++;
		else if (s[i]==')')
			cnt--;
		if(cnt<0)
			return false;
	}
	return (cnt==0);
}

void removeInvalidParen(string s)
{
	if(s.empty())
		return ;
	set<string> visit;
	//queue for maintaining BFS
	queue<string> q;
	string temp;
	bool level;

	q.push(s);
	visit.insert(s);
	while(!q.empty())
	{
		s=q.front();
		q.pop();
		if(StringisValid(s))
		{
			cout<<s<<endl;
			level=true;
		}
		if(level)
			continue;
		for(int i=0;i<s.length();i++)
		{
			if(!isParen(s[i]))
				continue;

			temp=s.substr(0,i)+s.substr(i+1);
			if(visit.find(temp)==visit.end())
			{
				q.push(temp);
				visit.insert(temp);
			}
		}
	}
}

int main()
{
	string s="()())()";
	removeInvalidParen(s);

	return 0;
}