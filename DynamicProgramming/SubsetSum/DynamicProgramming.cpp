#include<iostream>

using namespace std;

//Uses Dynamic programming for pseudo-polynomial time solution 

// O/P
// 1   0   0   0   0   0   0   0   0   0   
// 1   0   0   1   0   0   0   0   0   0   
// 1   0   0   1   0   0   0   0   0   0   
// 1   0   0   1   1   0   0   1   0   0   
// 1   0   0   1   1   0   0   1   0   0   
// 1   0   0   1   1   1   0   1   1   1   
// 1   0   1   1   1   1   1   1   1   1   
// There exists a subset with the given sum value

bool SubsetSum(int a[],int n,int sum)
{
	bool ss[n+1][sum+1]; //T if ∃ a subset(a[0---j-1]) at ss[i][j] with sum i
	for(int i=0;i<=n;i++)
		ss[i][0]=true; //true if sum = 0
	for(int i=1;i<=sum;i++) //observe <=
		ss[0][i]=false; //set is empty, sum!=0, then false

	//filling dp 2D array in bottom up manner
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(j<a[i-1])
				ss[i][j]=ss[i-1][j];
			if(j>=a[i-1])
				ss[i][j]=ss[i-1][j] || ss[i-1][j-a[i-1]];
		}
	}
	//printing DP table
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			cout<<ss[i][j]<<"   ";
		}
		cout<<endl;
	}

	return ss[n][sum];
}

int main()
{
	int arr[]={3,34,4,12,5,2};
	int sum=9;
	int n=sizeof(arr)/sizeof(arr[0]);
	if(SubsetSum(arr,n,sum)==true)
		cout<<"There exists a subset with the given sum value"<<endl;
	else
		cout<<"There does not exist a subset with the given sum value"<<endl;

	return 0;
}