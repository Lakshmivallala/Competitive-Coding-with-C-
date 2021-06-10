#include<iostream>

using namespace std;

//Output: 
//bbc
void abc(char a[])
{
	cout<<*++a;
	cout<<*a++;
	cout<<*a;
}
int main()
{
	char a[100];
	a[0]='a';
	a[1]='b';
	a[2]='c';
	a[4]='d';

	abc(a);

	return 0;
}