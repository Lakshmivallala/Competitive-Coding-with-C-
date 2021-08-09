#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//O/p:
//Hello
//Hello
//Hello

void display(char * C)
{
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
	display(C);

	// char C[20]="Hello"; //string gets stored in space for array, goes to stack in array of size 20
	char *D="Trial"; //string gets stored as compile time constant (mostly in text segment of memory)
	D[0]='A'; //this can't be done, causes an error
	display(D);
	return 0;
}