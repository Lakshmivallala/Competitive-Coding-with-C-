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

	map<int,int>::iterator iter;


	//assigning elements from m1 to m2
	map<int,int> m2(m1.begin(),m1.end());

	//displaying map 2
	cout<<"Map2 : "<<endl;
	for(iter=m2.begin();iter!=m2.end();++iter)
	{
		cout<<'\t'<<iter->first<<'\t'<<iter->second<<'\n';
	}
	cout<<endl;

}