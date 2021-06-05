#include<iostream>

using namespace std;

int main()
{
  string s1="Hello World"; //O/p: Hello World	
  cout<<s1<<endl;

  //However, if you input Hello World, O/p: Hello only
  string s2; 
  cin>>s2;
  cout<<s2<<endl;
  
  string res;
  res=s1+s2;
  cout<<res<<endl; //returns concatenated string
  //WITHOUT SPACE

  if(s1==s2) //this is case sensitive comparison
  	cout<<"Equal";
  else
  	cout<<"Not Equal";

  // If you input s2 as "Hello World", it will still return "Not Equal" since
  // the second string is only taken to be "Hello" by the compiler
  return 0;
}