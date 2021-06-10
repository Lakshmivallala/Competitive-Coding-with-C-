#include<iostream>

using namespace std;

int main()
{
	char a[5]="Knot",*p,i,*p1;
	p=&a[1];
	p1=p+3;
	*p1=101;
	for(int i=0;i<4;i++)
	{
		cout<<*p++;
	}

	return 0;
}