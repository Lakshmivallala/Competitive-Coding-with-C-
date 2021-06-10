#include<iostream>

using namespace std;

//24

int main()
{
	static int i,j;
	for(++i;++i;++i)
	{
		cout<<i;
		if(i==4)
			break;
	}
	
	return 0;
}