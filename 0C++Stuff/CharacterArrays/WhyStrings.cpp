#include<iostream>

using namespace std;

int main()
{
	char c='a'; 
	//Characters are declared with single quotes
	// char c="a"; Leads to the error:
	//invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]

	// char d='aaaaab'; //ERROR (character constant too long for its type)
	cout<<c;
	//Character data type can store only one character
	//Hence we need strings
	//Character array can store an array of characters

	return 0;
}