#include<iostream>

using namespace std;

//Using only 1D array of size (sum/2 + 1) to solve this problem
//The array's value is true if there exists a ss with sum = j, else false

//TC: O(sum*n)
//SC: O(sum)

bool findPartition(int arr[],int n)
{
	int sum=0;
	//finding sum of array
	for(int i=0;i<n;i++)
		sum=sum+arr[i]; 

	if(sum%2!=0)
		return false; //if sum is odd, cant find subsets with equal sums

	bool dp[sum/2 + 1];
	for(int i=0;i<=sum / 2;i++)
		dp[i]=0;

	for(int i=0;i<n;i++)
	{	
		for(int j=sum/2;j>=arr[i];j--)
		{
			if(dp[j-arr[i]]==1 || j==arr[i])
				dp[i]=1;
		}
	}

	return dp[sum/2];
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