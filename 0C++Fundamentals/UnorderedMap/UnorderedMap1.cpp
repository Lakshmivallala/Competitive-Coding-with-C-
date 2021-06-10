#include<iostream>
#include<unordered_map>

using namespace std;

// o/p:
// LSA 3
// DEF 10
// ABC 1

int main()
{
  unordered_map<string,int> u;
  u["ABC"]=1;
  u["DEF"]=10;
  u["LSA"]=3;

  for(auto ele:u)
  	cout<<ele.first<<" "<<ele.second<<endl;


  return 0;
}