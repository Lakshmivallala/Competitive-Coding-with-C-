#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s = "WOW";
    string r;
    for(int i=s.size()-1;i>=0;i--)
    	r.push_back(s[i]);
	
	if(s==r)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;   
}
