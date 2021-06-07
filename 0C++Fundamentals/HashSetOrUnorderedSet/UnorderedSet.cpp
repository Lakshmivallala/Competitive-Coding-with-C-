#include<iostream>
#include<unordered_set> //to use an unordered set

using namespace std;

//A set contains distinct elements (unique elements)
//A set is also ordered (sorted)
//STL set: std::ordered_set or simply std::set
//An unordered set is not ordered (not sorted) 
//We use it when the order doesn't matter but when elements must be unique
//Internally, elements are inserted using hashing into different buckets
//Once we compute the hash, it is very fast to access the element 
//This means faster insertion, searching and removal (avg constant time complexity)
//Insertion is randomised

//Output
// Found 1
// 8 6 7 5 1 3 

int main()
{	
	//int Unordered Set US1, declared with duplicate items to validate properties
	//can also remove std:: since we have namespace included
	std::unordered_set<int> US1 = {3,1,5,7,3,6,7,8,1};
	//declaring a auto tpye variable searchItem
	//i.e deduct the data type automatically 
	//Even return type in functions can be auto
	auto searchItem = US1.find(1);
	if(searchItem!=US1.end())
	{
		//can also use std::cout
		cout<<"Found "<<(*searchItem)<<"\n";
	}
	else
	{
		cout<<"Not found"<<endl;
	}

	for(auto& ele: US1)
	{
		cout<<ele<<" ";
	}
	cout<<endl;


  return 0;
}