#include<iostream>
#include <cstring>

using namespace std;

// o/p:
// There exists a subset with the given sum value
// -1 -1 -1 -1 0 0 -1 0 -1 0 -1 -1 0 
// -1 -1 -1 -1 -1 1 -1 -1 -1 0 -1 -1 0 
// -1 -1 -1 -1 -1 1 -1 -1 -1 -1 -1 -1 0 
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 1 
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 1 
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 

//TC: O(sum*n)
//SC: O(sum*n) for 2d array

int tabl[2000][2000];

int SubsetSum(int a[],int n, int sum)
{
	if(sum==0)
		return 1; //sum is 0, so ss = empty = true = 1
	if(n<=0)
		return 0; //if number of items = 0, cant find sum = false = 0

	if(tabl[n-1][sum]!=-1)
		return tabl[n-1][sum];

	if(a[n-1]>sum) //value of a[n-1] > sum
		return tabl[n-1][sum] = SubsetSum(a,n-1,sum); //call for next value
	else
	{
		return tabl[n-1][sum]=SubsetSum(a,n-1,sum) || SubsetSum(a,n-1,sum-a[n-1]);
	}
}

int main()
{
	memset(tabl,-1,sizeof(tabl));
	int n=5;
	int a[]={1,5,3,7,4};
	int sum=12;
	if(SubsetSum(a,n,sum))
		cout<<"There exists a subset with the given sum value"<<endl;
	else
		cout<<"There does not exist a subset with the given sum value"<<endl;
	//printing DP table
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			cout<<tabl[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}