#include<iostream>

using namespace std;

//Input the array
//However, if input = Good, O/P = Good
//But if input = Good Morning, O/P is still = Good
//This is because C++ compiler recognises space as a break and stores 
//it in the next variable
//We can use getline() function to avoid this
//These issues arise becuase space belongs to the character domain?


int main()
{
	char a[10];
	cin>>a;
	cout<<a<<endl;

	return 0;
}