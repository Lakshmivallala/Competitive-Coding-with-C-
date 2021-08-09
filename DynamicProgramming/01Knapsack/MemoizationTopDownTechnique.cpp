#include<bits/stdc++.h>

//Top Down DP Approach

//https://docs.google.com/document/d/1aAHc0DnuZvc_0SjIW_iMDTkbb0CSwz1c0WSR9Z-WYIA/edit
//http://cse.unl.edu/~goddard/Courses/CSCE310J/Lectures/Lecture8-DynamicProgramming.pdf

//O/p:
//220

//Extension of recursive approach
//If we get a (n,w) state for the first time, we store it to avoid re-calculating it

//TC: O(n*W) n:n(elements), W:KS capacity as redundant states are avoided
//SC: Auxiliary space of O(n*W) for 2D array that stores intermediate states

using namespace std;

//returns max value that can be put in ks
int knapsackRec(int wt[],int val[],int W,int n, int ** DP)
{
	//base condition
	if(n<0) return 0;
	if(DP[n][W]!=-1)
		return DP[n][W];

	if(wt[n]>W)
	{
		DP[n][W]=knapsackRec(wt,val,W,n-1,DP);
		return DP[n][W];
	}

	else
	{
		DP[n][W]=max(val[n] + knapsackRec(wt,val,W-wt[n],n-1,DP),
			knapsackRec(wt,val,W,n-1,DP));
		return DP[n][W];
	}
}

int knapsack(int wt[],int val[],int W,int n)
{
	//declaring table dynamically using double pointer
	int ** DP; 
	DP = new int * [n];

	for(int i=0;i<n;i++)
		DP[i]= new int[W+1];

	//fill table with -1 (can also use memset)
	for(int i=0;i<n;i++)
		for(int j=0;j<W+1;j++)
			DP[i][j]=-1;

	return knapsackRec(wt,val,W,n-1,DP);
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