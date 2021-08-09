#include<iostream>
#include<string.h> //for strlen function

using namespace std;

// 12
// 12
// 12
// 12
// 12

int main()
{
	string s="Random Text!";
	cout<<s.size()<<endl;
	cout<<s.length()<<endl;
	cout<<strlen(s.c_str())<<endl; //(C-style string, which ends at the '\0')
	
	int i=0;
	while(s[i]) i++;
	cout<<i<<endl;

	for(i=0;s[i];i++)
		;
	cout<<i<<endl;

	return 0;
}