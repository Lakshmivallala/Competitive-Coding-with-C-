#include<iostream>
#include<set>

using namespace std;

//std::set<T> setName (where T is type of set)
//stl sets are SORTED

//user defined datatype

class Person
{
public:
	int age;
	string name;
	float marks;

	//comparator for values belonging to datatype Person
	//using age as the comparator
	bool operator < (const Person& rhs) const 
	{
		return age<rhs.age;
		//not a good practice but
		//use age>rhs.age if you want descending order
	}

	bool operator > (const Person& rhs) const 
	{
		return age>rhs.age;
 	}
}; //observe the ;
int main()
{
	  set<Person,std::greater<>> S2;
	  // set<Person,std::less<>> S2; //for less than comparator
	  S2={{23,"Xyz",95},{45,"Abc",55.5},{11,"Pqrs",32}};
	  for(const auto& ele: S2)
	  {
	  	cout<<ele.age<<" "<<ele.name<<" " << ele.marks<<endl;
	  }
	// OUTPUT:
	// 11 Pqrs 32
	// 23 Xyz 95
	// 45 Abc 55.5	

	  return 0;
}