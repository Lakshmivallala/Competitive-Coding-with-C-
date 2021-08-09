#include<iostream>
#include <cstring>

using namespace std;

//O/p:
//220

//TC: O(n*W) n:n(elements), W:KS capacity
//SC: Auxiliary space of O(W) for 1D array

int knapsack(int wt[],int val[],int W,int n)
{
	//creating a 1D array
	int DP[W+1];
	memset(DP,0,sizeof(DP)); //initialising DP 1D array	
	//#include <cstring> for memset

	for(int i=1;i<n+1;i++) //notice how we skipped i=0
	{
		for(int j=W;j>=0;j--)
		{
			if(wt[i-1]<=j)
				DP[j]=max(DP[j],DP[j-wt[i-1]] + val[i-1]); //find max
		}
	}
	return DP[W]; //return max
}

int main()
{
	int val[]={60,100,120};
	int wt[]={10,20,30};
	int W=50; //ks capacity
	int n=sizeof(val)/sizeof(val[0]);
	cout<<knapsack(wt,val,W,n);

	return 0;
}