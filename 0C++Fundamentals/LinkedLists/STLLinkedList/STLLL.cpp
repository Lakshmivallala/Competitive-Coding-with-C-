#include<iostream>
#include<list>

using namespace std;

//o:p
//7 5 4 6 2 9 

int main()
{
	list<int>L;
	L.push_back(2); //insert an element at the end of the linked list
	L.push_front(6);
	L.push_front(4); //insert an element at the beginning of the linked list
	L.push_front(7);
	L.insert(++L.begin(),5); //insert '5' before the position of the first argument
	L.push_back(9);

	list <int> :: iterator i;
	for(i=L.begin();i!=L.end();i++)
		cout<<*i<< " ";
	cout<<endl;
	return 0;
}