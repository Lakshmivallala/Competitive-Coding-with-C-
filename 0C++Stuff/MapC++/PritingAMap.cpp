#include<iostream>
#include<iterator>  // for iterators
#include<map> // containers that store elements in a mapped fashion

using namespace std;

int main()
{
	map<int,int> m1; //creates an empty int map

	//inserting elements into the map
	m1.insert(pair<int,int>(1,43));
	m1.insert(pair<int,int>(2,44));
	m1.insert(pair<int,int>(3,41));
	m1.insert(pair<int,int>(4,42));
	m1.insert(pair<int,int>(5,46));
	m1.insert(pair<int,int>(6,47));

	//displaying the map

	//begin() – Returns an iterator to the first element in the map
	//end() – Returns an iterator to the theoretical element that follows last element in the map
	map<int,int>::iterator iter;
	cout<<"Map: "<<endl;
	for(iter=m1.begin();iter!=m1.end();++iter)
	{
		cout<<'\t'<<iter->first<<'\t'<<iter->second<<'\n';
	}
	cout<<endl;
}