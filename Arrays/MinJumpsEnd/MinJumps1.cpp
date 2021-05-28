#include<iostream>
#include<bits/stdc++.h>

//Naive Recursive Approach

using namespace std;


int minJ(int a[],int n)
{
	//if array has only 1 element
	//This is the base case
	if(n==1)

}


int main()
{
  int n;
  cout<<"Enter n ";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter element "<<i<< " "; 
    cin>>a[i];
  }

  cout<<"Min no of jumps: "<< minJ(a,n);
}