#include<iostream>

using namespace std;

int main()
{
  // string s1,s2; 
  // cin>>s1>>s2; //Hello and World
  // string s3=s1+s2; //Hello World
  // cout<<s3;
  //However, s1 and s2 must be only one word else the compiler assumes the
  //space means that we are ready to take the next input

  string S1,S2,S3;
  getline(cin,S1); // I/p: It is such a great day to be    ALIVE    !
  cout<<S1; //O/p: It is such a great day to be    ALIVE    !
  //utput retains blank spaces as well due to getline function
  return 0;
}