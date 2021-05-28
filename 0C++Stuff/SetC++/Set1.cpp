#include<iostream>
#include<set>

using namespace std;

//std::set<T> setName (where T is type of set)
//stl sets are SORTED

int main()
{
	  set<int> S1;
	  S1={1,3,4,24,2,4};
	  for(const auto& ele: S1)
	  {
	  	cout<<ele<<endl;
	  }

	  return 0;
}