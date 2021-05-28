#include<iostream>

using namespace std;

// two-dimensional vector
int main()
{
  int a[]={1,2,3}; //one dimesional array
  int b[]={4,5,6}; //OBSERVE THE BRACKETS
  int * matrix[]={a,b}; //matrix
  for(int i=0;i<2;i++) 
  	for (int j=0;j<3;j++)
  	{
  		cout<<matrix[i][j]<<" ";
  	}
  cout<<endl;


    return 0;

}