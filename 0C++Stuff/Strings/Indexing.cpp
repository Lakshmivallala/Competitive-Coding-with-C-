#include<iostream>

using namespace std;

int main()
{
  string s1="Hello World"; //O/p: Hello World	
  cout<<s1[0]<<endl; //O/p: H
  s1[0]='B'; //s1[0]= "B" results in error
  //This implies that s1[0] is a character, not a string
  cout<<s1<<endl; //O/p: Bello World
  for(int i=0;i<s1.size();i++)
  {
    cout<<s1[i]<<" "; // O/p: B e l l o   W o r l d 
  }
  cout<<s1.size()<<endl; //returns 11
  //Hello-5, World-5, Blank space-1
  return 0;
}