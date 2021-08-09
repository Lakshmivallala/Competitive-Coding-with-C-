#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//O/p:
// e
// Aello
// ll

int main()
{
	char C[6]="Hello"; 
	char *c;
	c=C;
	cout<<c[1]<<endl;
	c[0]='A';
	cout<<C<<endl;
	cout<<c[3]<<C[3]<<endl;

	return 0;
}