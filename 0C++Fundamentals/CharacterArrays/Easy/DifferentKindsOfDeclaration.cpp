#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//4
//5
int main()
{
	char C[]="JOHN"; //will create JOHN\0 implicitly, implicit null termination
	int len=strlen(C); //4
	cout<<len<<endl;
	cout<<sizeof(C)<<endl; //5
	//Length is 4 but size of C in bytes will be 5

	char A[4]="JOHN"; //will give compilation error
	// error: initializer-string for array of chars is too long [-fpermissive]

	char B[5]={'J','O','H','N','\0'}; //we need to explicitly terminate the array 
	return 0;
}