#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//o/p:
// Sample String
// gnirtS elpmaS

//Time complexity: O(n)
//Space complexity: No auxiallary space

//using a stack would give us a space complexity of O(n)

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}

void reverse(char str[])
{
	int n= strlen(str),i;
	for(int i=0;i<n/2;i++)
		swap(&str[i],&str[n-i-1]);
}

//driver function
int main()
{
	char str[]="Sample String";
	cout<<str<<endl;
	reverse(str);
	cout<<str<<endl;
	return 0;
}