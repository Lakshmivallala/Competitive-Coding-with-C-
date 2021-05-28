#include <bits/stdc++.h>
using namespace std;

//time complexity O(m+n)

void FUnion(int *a,int n, int *b,int m)
{
	//define an empty map
	map<int,int> m1;

	//inserting elements
	for(int i=0;i<n;i++)
	{
	//insert array element with its index
	m1.insert({a[i],i}); 
	}

	for (int i = 0; i < m; i++)
	{
        m1.insert({ b[i],i});
	}

	//displaying map with unique elements of a and b arrays and their indices
	// map<int,int>::iterator iter;
	// cout<<"Map: "<<endl;
	// for(iter=m1.begin();iter!=m1.end();++iter)
	// {
	// 	cout<<'\t'<<iter->first<<'\t'<<iter->second<<'\n';
	// }
	// cout<<endl;

	//but we don't need the indices so we print only the elements
	cout<<"Map: "<<endl;
	for(auto iter=m1.begin();iter!=m1.end();++iter)
	{
		cout<<'\t'<<iter->first<<" "<<'\n';
	}
	cout<<endl;
}

int main()
{
	int a[10]={1,2,4,5,6,8,3,5,9,0};
	int b[12]={7,3,2,7,11,10,2,42,2,0,43,12};

	FUnion(a,10,b,12);
}