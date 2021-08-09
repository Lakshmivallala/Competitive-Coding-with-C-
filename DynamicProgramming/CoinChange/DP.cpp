#include<iostream>

using namespace std;

//variation of unbounded knapsack problem 

int count(int a[],int n,int m)
{
	if(m==0)
		return 1; //do not include any coin
	if(m<0)
		return 0; //no solution exists
	if(n<=0 && n>=1)
		return 0; //no coins and n>0 then no solution
	return count(a,n-1,m) + count(a,n,m-a[n-1]);

}


int main()
{
	int i,j;
	int arr[]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<" "<<count(arr,n,4);

	return 0;
}