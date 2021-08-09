#include<iostream>

using namespace std;

// o/p:
// 6

#define maxN 20
#define maxSum 50
#define minSum 50
#define base 50

int dp[maxN][maxSum+minSum];
bool v[maxN][maxSum+minSum];

int findSSCount(int * arr, int i, int requiredSum, int n)
{
	if(i==n) 
	{
		if(requiredSum==0)
			return 1;
		else
			return 0;
	}

	if(v[i][requiredSum+base])
		return dp[i][requiredSum+base];

	v[i][requiredSum+base]=1;

	dp[i][requiredSum+base]=findSSCount(arr,i+1,requiredSum,n)
	+ findSSCount(arr,i+1,requiredSum-arr[i],n);

	return dp[i][requiredSum+base];
}

int main()
{
	int arr[]={3,3,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=6;
	cout<<findSSCount(arr,0,x,n);

	return 0;
}