#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// JOHN
// JOHN
// 4
// 4

int main()
{
	char C[4];
	C[0]='J';
	C[1]='O';
	C[2]='H';
	C[3]='N';
	//Terminating with null character
	C[4]='\0';
	cout<<C<<endl;
	printf("%s\n",C);
	cout<<sizeof(C)<<endl;

	int len=strlen(C);
	cout<<len<<endl;
	return 0;
}