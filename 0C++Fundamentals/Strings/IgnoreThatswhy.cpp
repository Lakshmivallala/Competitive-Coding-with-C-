#include<iostream>

using namespace std;

int main()
{
  
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
  {
    string s;
    getline(cin,s);
    cout<<"This is the output: "<<s<<endl;
  }
// 3
// a b
// This is the output: a b
// c d
// This is the output: c d
// e f
// This is the output: e f
// But read about input bugger, flush()
  return 0;
}