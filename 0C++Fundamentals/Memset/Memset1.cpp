#include<iostream>
#include<cstring>

using namespace std;

// 0
// 0
// 10
// 0
// -1768515946 /garbage value so random
// -1
// 0
// 1785358954

int main()
{
	int a[10]={0};
	int b[10]={2234};
	cout<<a[5]<<endl; //0
	cout<<b[5]<<endl; //0
	int n;
	cin>>n;
	int c[n]={0};
	cout<<c[5]<<endl; //garbage value

	int d[n];
	memset(d,150,sizeof(d));
	cout<<d[5]<<endl; //garbage value since only 0/1 can be passed not 150 or anything else

	int e[n];
	memset(e,-1,sizeof(e));
	cout<<e[5]<<endl; // -1

	int f[n];
	memset(f,0,sizeof(f));
	cout<<f[5]<<endl; // 0

	int g[n];
	memset(g,-150,sizeof(g));
	cout<<g[5]<<endl; // garbage value

	return 0;
}