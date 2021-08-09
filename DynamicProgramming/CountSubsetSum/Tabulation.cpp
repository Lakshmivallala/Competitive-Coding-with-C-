#include<iostream>

//Works only for arrays with positive numbers

//O/p:
//6

//TC: O(sum*n) 
//SC: O(sum*n) for 2d array

using namespace std;

int findSSCount(int a[], int n, int sum)
{
	int dp[n+1][sum+1];
	dp[0][0]=1;

	for(int i=1;i<=sum;i++)
		dp[0][i]=0;
	for(int i=1;i<=n;i++)
		dp[i][0]=1;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]>j)
				dp[i][j]=dp[i-1][j]; //dont include
			else
				dp[i][j]=dp[i-1][j] + dp[i-1][j-a[i-1]];
		}
	}
	return dp[n][sum];
}

int main()
{
	int n=4;
	int arr[]={3,3,3,3};
	int sum=6;
	cout<<findSSCount(arr,n,sum);

	return 0;
}