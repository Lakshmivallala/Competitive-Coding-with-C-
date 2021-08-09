#include<iostream>

using namespace std;

//Doesnt work on GFG

// O/p:
// 111111
// 001111
// 000000
// 011111
// 001111
// 000111
// 000111
// 000000
// 000111
// 000111
// 000011
// 000000
// 000011
// 000011
// 000011
// 000011
// Can be divided into 2 subsets of equal sum

// TC: O(sum*n)
// SC: O(sum*n)

//This solution will not be feasible for arrays with a big sum

bool findPartition(int arr[],int n)
{
	int sum=0;
	//finding sum of array
	for(int i=0;i<n;i++)
		sum=sum+arr[i]; 

	if(sum%2!=0)
		return false; //if sum is odd, cant find subsets with equal sums

	bool dp[sum/2 + 1][n+1];
	for(int i=0;i<=n;i++)
		dp[0][i]=true;
	for(int i=1;i<=sum / 2;i++)
		dp[i][0]=false;

	for(int i=1;i<=sum / 2;i++)
	{	
		for(int j=1;j<=n;j++)
		{
			dp[i][j]=dp[i][j-1];
			if(i>=arr[j-1])
				dp[i][j]=dp[i][j] || dp[i-arr[j-1]]	[j-1];
		}
	}

	for(int i=0;i<=sum/2;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<dp[i][j];
		}
		cout<<endl;
	}
	return dp[sum/2][n];
}

int main()
{
	int arr[]={3,1,5,9,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(findPartition(arr,n)==true)
		cout<<"Can be divided into 2 subsets of equal sum"<<endl;
	else
		cout<<"Cannot be divided into 2 subsets of equal sum"<<endl;

	return 0;
}