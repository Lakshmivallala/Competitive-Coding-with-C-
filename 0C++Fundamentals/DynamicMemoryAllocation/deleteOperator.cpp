#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution
{
public:


};


int main()
{
  int *q=new int(25); 
  //delete pointer variable
  delete q;

  int *r = new int[10];
  delete[] r;
  return 0;
}