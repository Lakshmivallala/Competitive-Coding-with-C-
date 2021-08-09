#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Aello
// HelloWorld

void display1(char * C)
{
	C[0]='A';
	while(*C!='\0')
	{
		cout<<*C;
		C++;
	}
	cout<<endl; //when we reach null
}

void display2(const char * C)
{
	// C[0]='A'; // error: assignment of read-only location ‘* C’
	while(*C!='\0')
	{
		cout<<*C;
		C++;
	}
	cout<<endl; //when we reach null
}


int main()
{
	char C[20]="Hello"; 
	char D[20]="HelloWorld"; 
	display1(C); //Hello is changed to Aello here
	display2(D); //So create new char array to check this

	return 0;
}