#include<iostream>

using namespace std;



int main()
{
	int *p;
	*p=45;
	cout<<*p<<endl; 
	*p=60;
	cout<<*p<<endl; //if value changes, it is not in stack, it is in write protect

	return 0;
}