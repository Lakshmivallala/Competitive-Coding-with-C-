#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// a
// ab
// abf
// abfb
// abfbb
// abfbba
// bf
// bfb
// bfbb
// bfbba
// bfbba
// fbb
// fbba
// fbba
// fbba
// bba
// bba
// bba
// ba
// ba
// a


int main()
{
  
string s="abfbba";
for(int i=0;i<s.length();i++)
{
	for(int j=i+1;j<=s.length();j++)
	{
		cout<<s.substr(i,j)<<endl;
	}
}

  return 0;
}