#include<iostream>
#include<bits/stdc++.h>

//https://www.youtube.com/watch?v=Bf8a6IC1dE8

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
	//Haven't terminated with null character
	cout<<C<<endl;
	printf("%s\n",C);
	cout<<sizeof(C)<<endl; 
	//???? WHY IS THE SIZE STILL 4?

	int len=strlen(C);
	cout<<len<<endl;

	return 0;
}