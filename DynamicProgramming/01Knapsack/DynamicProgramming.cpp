#include<bits/stdc++.h>

//https://docs.google.com/document/d/1aAHc0DnuZvc_0SjIW_iMDTkbb0CSwz1c0WSR9Z-WYIA/edit
//http://cse.unl.edu/~goddard/Courses/CSCE310J/Lectures/Lecture8-DynamicProgramming.pdf

//O/p:
//220

//We can avoid re-computation of same sub problems by using dynamic programming
//(Constucting a temporary array)
//bottom up manner

//only the capacity of the knapsack and the number of items change,
//the wt and val arrays remain constant so we dont consider them in our 2D array

//The elements of the 2D array at lets say position i and j will represent 
//the max weight considering all values from 1 to ith position

//row: i: number of items
//column: j: capacity

//TC: O(n*W) n:n(elements), W:KS capacity
//SC: Auxiliary space of O(n*W) for 2D array

using namespace std;

//utility function that returns the max value between 2 
int max(int a,int b)
{
	return (a>b ? a : b); //if a>b, return a, else return b
}

//returns max value that can be put in ks
int knapsack(int wt[],int val[],int W,int n)
{
	int i,j;
	vector<vector<int>> K(n+1,vector<int> (W+1));
	//matrix of n+1, w+1

	//building table in bottom up manner
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
			if(i==0 || j==0)
				K[i][j]=0;

			//if weight is less than knapsack, we either include it or not
			else if(wt[i-1]<=j)
				K[i][j]=max(val[i-1] + K[i-1][j-wt[i-1]], //include
					K[i-1][j]) ;//dont include

			//if weight of item is greater than knapsack capacity, don't inclue it
			else
				K[i][j]=K[i-1][j]; //dont include
			//only the size of array will be decremented and capacity remains same
		}
	}
	return K[n][W];
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