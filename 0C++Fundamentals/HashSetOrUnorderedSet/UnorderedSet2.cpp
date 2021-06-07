#include<iostream>
#include<unordered_set> //to use an unordered set

using namespace std;

//Output:
//error
// Not found 
// Code 
// small 
// code 
// a
// is 
// This 
// Code  small  code  a is  This  
  
 
//Notice how Code and code are accepted as different elements	
int main()
{	
	//unordered set of strings
	unordered_set<string> US2;

	US2.insert("This ");
	US2.insert("is ");
	US2.insert("a");
	US2.insert("small ");
	US2.insert("code ");
	US2.insert("Code ");

	// Error, check
	// auto searchItem = US2.find("code");
	// if(searchItem!=US2.end())
	// {
	// 	cout<<"Found "<<(*searchItem)<<"\n";
	// }
	// else
	// {
	// 	cout<<"Not found"<<endl;
	// }

	string key="code";

	if(US2.find(key)==US2.end())
		cout<<"Not found "<<endl;
	else
		cout<<"Found"<<endl;

	unordered_set<string> ::iterator itr;
	for(itr=US2.begin();itr!=US2.end();itr++)
		cout<<(*itr)<<endl;
	for(auto& ele: US2)
	{
		cout<<ele<<" ";
	}
	cout<<endl;


  return 0;
}