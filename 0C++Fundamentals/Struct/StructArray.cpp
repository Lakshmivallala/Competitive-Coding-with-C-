#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
Enter 1 th a
a
Enter 1 th b
23
Enter 1 th c
42.5
Enter 2 th a
f
Enter 2 th b
24
Enter 2 th c
532.
Enter 3 th a
d 
Enter 3 th b
432
Enter 3 th c
353 

The 1 th a b c
a
23
42.5
The 2 th a b c
f
24
532
The 3 th a b c
d
432
353
*/

struct abc
{
	char a;
	int b;
	float c;
};


int main()
{
	struct abc arr[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Enter "<<i+1<<" th a"<<endl;
		cin>>arr[i].a;
		cout<<"Enter "<<i+1<<" th b"<<endl;
		cin>>arr[i].b;
		cout<<"Enter "<<i+1<<" th c"<<endl;
		cin>>arr[i].c;
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"The "<<i+1<<" th a b c"<<endl;
		cout<<arr[i].a<<endl;
		cout<<arr[i].b<<endl;
		cout<<arr[i].c<<endl;
	}

	return 0;
}