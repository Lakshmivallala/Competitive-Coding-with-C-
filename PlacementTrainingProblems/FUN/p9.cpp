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
	a[0]='x';
	abc(a);

	return 0;
}