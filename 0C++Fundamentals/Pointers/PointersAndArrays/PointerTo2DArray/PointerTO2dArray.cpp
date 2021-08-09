#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution
{
public:
	
};


int main()
{
	int **p; //double pointer for 2D arrays
	//triple pointer for 3D arrays
	p=new int*[3]; //integer pointer of size 3
	p[0]=new int[4];
	p[1]=new int[4];
	p[2]=new int[4];


	cout<<p<<endl;
	cout<<&p<<endl;
	cout<<*p<<endl;
	cout<<p+1<<endl;
	cout<<*(p+1)<<endl;
	cout<<*(p+1)+2<<endl;
	cout<<*(*(p+1)+2)<<endl;
	// cout<<*(*(p+i)+j)<<endl;
	cout<<**p<<endl;

	return 0;
}