#include<iostream>

using namespace std;

// Pseudo Polynomial Time Complexity: O(n*sum)
// Auxiliary Space: O(sum)

int findMin(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];

	int y=sum/2+1;
	bool dp[y],dd[y];
	for(int i=0;i<y;i++)
		dp[i]=dd[i]=false;
	dd[0]=true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j+arr[i]<y;j++)
		{
			if(dp[j])
				dd[j+arr[i]]=true;
		}
		for(int j=0;j<y;j++)
		{
			if(dd[j])
				dd[j]=true;
			dd[j]=false;
		}
	}
	for(int i=y-1;i>=0;i--)
	{
		if(dp[i])
			return (sum-2*i);
	}
}

int main()
{
	int arr[] = { 1, 6, 11, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Min difference: "<< findMin(arr, n)<<endl;

	return 0;
}