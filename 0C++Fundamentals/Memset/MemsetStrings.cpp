#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char s[]="Random Text"; //11characters including space, 1 for null char
	memset(s,'a',sizeof(s));
	//a's copied to 12 chars
	cout<<s<<endl; //aaaaaaaaaaaa (fills the blank space and also null character)
	cout<<endl;

	// char s1[]="Random Text";
	// memset(s1,'abc',sizeof(s1)); //ERROR warning: multi-character character constant
	// cout<<s1<<endl;

	// char s2[]="Random Text!";
	// memset(s2,'z',sizeof(s2));
	// cout<<s2<<endl;

	return 0;
}