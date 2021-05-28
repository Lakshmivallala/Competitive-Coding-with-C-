#include<iostream>
#include<algorithm> //OBERVSE
using namespace std;  

int main()
{

  string s1="Hello World";
  reverse(s1.begin(),s1.end()); //Function from algorithm header file
  cout<<s1; 

  return 0; 
}
