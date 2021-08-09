#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//O/p:
//Hello
//Hello
//Hello

void display(char * C)
{
	int i=0;
	while(C[i]!='\0') //or *(C+i)
	{
		cout<<C[i];
		i++;
	}
	cout<<endl; //when we reach null
}

void display2(char C[])
{
	int i=0;
	while(*(C+i)!='\0')
	{
		cout<<C[i];
		i++;
	}
	cout<<endl; //when we reach null
}

void display3(char * C)
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
	display2(C);
	display3(C);

	return 0;
}